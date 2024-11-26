package labassignment1java;

import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class CharacterFrequency {
    public static void main(String[] args) {
        try (Scanner scanner = new Scanner(System.in)) {
			System.out.print("Enter a string: ");
			String input = scanner.nextLine();
			System.out.print("Enter a number (n): ");
			int n = scanner.nextInt();

			Map<Character, Integer> charFrequency = new HashMap<>();
			for (char c : input.toCharArray()) {
			    charFrequency.put(c, charFrequency.getOrDefault(c, 0) + 1);
			}

			System.out.println("Characters that exceed " + n + ":");
			for (Map.Entry<Character, Integer> entry : charFrequency.entrySet()) {
			    if (entry.getValue() > n) {
			        System.out.println(entry.getKey() + ": " + entry.getValue());
			    }
			}
		}
    }
}