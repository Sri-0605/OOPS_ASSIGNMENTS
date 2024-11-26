package labassignment1java;

public class DateTest {
    public static void main(String[] args) {
        // Create a new Date object
        Date date = new Date(12, 25, 2022);

        // Display the date
        System.out.println("Initial Date:");
        date.displayDate();

        // Modify the date using setters
        date.setMonth(6);
        date.setDay(15);
        date.setYear(2023);

        // Display the updated date
        System.out.println("Updated Date:");
        date.displayDate();
    }
}
