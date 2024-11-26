package labassignment1java;
import java.util.Scanner;

class INPUT{
	Scanner scanner = new Scanner(System.in);
	
	double miles;
	double fuel;
	double fees;
	double toll;
	final int milespergallon= 30;
	
	INPUT(){
		miles = 0.0;
		fuel = 0.0;
		fees = 0.0;
		toll = 0.0;		
	}
	
	void GetData() {
		System.out.println("enter no of miles travelled per day");
		miles = scanner.nextDouble();
		System.out.println("enter cost per gallon of gasoline");
		fuel =  scanner.nextDouble();
		System.out.println("enter avg fees per day");
		fees = scanner.nextDouble();
		System.out.println("enter the tolls per day");
		toll = scanner.nextDouble();
	}
	
	double calculate() {
		return (miles/milespergallon)*fuel + fees + toll;
	}
	
	
}
public class DrivingCostCalc{
	public static void main(String[] args) {
		INPUT input = new INPUT();
		input.GetData();
		 double dailycost = input.calculate();
		 System.out.printf("your daily driving cost is %.2f/n", dailycost);
		
	}
}

	

		