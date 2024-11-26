package labassignment1java;


public class EMPLOYEE {
     private String name;
     private String lastname;
     private double salary;
   
     //constructor
     public EMPLOYEE(String name, String lastname,double salary) {
    	 setName(name);
    	 setLastname(lastname);
    	 setSalary(salary);
    	  
     }
     
     public String getName() {
         return name;
     }
	
     public void setName(String name) {
    	 this.name=name;
     }
	
     public String getLastname() {
         return lastname;
     }
	
     public void setLastname(String lastname) {
    	 this.lastname=lastname;
     }
     
     public double getSalary() {
    	 return salary;
     }
	public void setSalary(double salary) {
		if(salary>0) {
		this.salary = salary;
	}
		}
		// Method to calculate yearly salary
	    public double getYearlySalary() {
	        return salary * 12;
	}
}
