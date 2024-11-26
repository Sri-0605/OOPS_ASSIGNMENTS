package labassignment1java;


import java.util.Scanner;

public class GasMileage {
	    public static void main(String[] args) {
	        Scanner scanner = new Scanner(System.in);

	        int totalMiles = 0;
	        int totalGallons = 0;

	        System.out.println("Enter miles driven (-1 to quit): ");
	        int miles = scanner.nextInt();

	        while (miles != -1) {
	            System.out.println("Enter gallons used: ");
	            int gallons = scanner.nextInt();

	            // Calculate miles per gallon for this trip
	            double milesPerGallon = (double) miles / gallons;

	            // Display miles per gallon for this trip
	            System.out.printf("Miles per gallon for this trip: %.2f%n", milesPerGallon);

	            // Update total miles and gallons
	            totalMiles += miles;
	            totalGallons += gallons;

	            // Calculate combined miles per gallon
	            double combinedMilesPerGallon = (double) totalMiles / totalGallons;

	            // Display combined miles per gallon
	            System.out.printf("Combined miles per gallon: %.2f%n%n", combinedMilesPerGallon);

	            // Prompt user for next trip
	            System.out.println("Enter miles driven (-1 to quit): ");
	            miles = scanner.nextInt();
	        }

	        scanner.close();
	    }
}

