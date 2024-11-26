package labassignment1java;

import java.util.Scanner;

public class PerfectString {
    public static boolean isPerfectString(String input) {
        // frequency array to store the count of each character
        int[] frequency = new int[256]; // assuming ASCII characters only

        // Iterate through the input string and count the frequency of each character
        for (char c : input.toCharArray()) {
            frequency[c]++;
        }

        //  if each character appears only once
        for (int count : frequency) {
            if (count != 1) {
                return false;
            }
        }

        return true;
    }

    public static void main(String[] args) {
        try (Scanner scanner = new Scanner(System.in)) {
			System.out.print("Enter a string: ");
			String input = scanner.nextLine();

			if (isPerfectString(input)) {
			    System.out.println("The string is perfect.");
			} else {
			    System.out.println("The string is not perfect.");
			}
		}
    }
}
