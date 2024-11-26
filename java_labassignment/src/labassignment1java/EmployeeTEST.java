package labassignment1java;

public class EmployeeTEST {

	public static void main(String[] args) {
		// Create two Employee objects
        EMPLOYEE employee1 = new EMPLOYEE("John", "Doe", 5000.0);
        EMPLOYEE employee2 = new EMPLOYEE("Jane", "Smith", 6000.0);

        // Display each employee's yearly salary
        System.out.println("Employee 1: " + employee1.getName() + " " + employee1.getLastname() + "'s yearly salary: " + employee1.getYearlySalary());
        System.out.println("Employee 2: " + employee2.getName() + " " + employee2.getLastname() + "'s yearly salary: " + employee2.getYearlySalary());

        // Give each employee a 10% hike
        employee1.setSalary(employee1.getSalary() * 1.1);
        employee2.setSalary(employee2.getSalary() * 1.1);

        // Display each employee's yearly salary again
        System.out.println("Employee 1: " + employee1.getName() + " " + employee1.getLastname() + "'s yearly salary after 10% hike: " + employee1.getYearlySalary());
        System.out.println("Employee 2: " + employee2.getName() + " " + employee2.getLastname() + "'s yearly salary after 10% hike: " + employee2.getYearlySalary());
    }
}

	