package labassignment1java;

public class PasswordValidator {
    public static boolean isValidPassword(String password) {
        // Check length
        if (password.length() < 5 || password.length() > 12) {
            return false;
        }

        // Check for at least one lowercase character and one digit
        boolean hasLowercase = false;
        boolean hasDigit = false;
        for (char c : password.toCharArray()) {
            if (Character.isLowerCase(c)) {
                hasLowercase = true;
            } else if (Character.isDigit(c)) {
                hasDigit = true;
            }
            if (hasLowercase && hasDigit) {
                break;
            }
        }
        if (!hasLowercase || !hasDigit) {
            return false;
        }

        // Check for no uppercase characters and no special characters
        for (char c : password.toCharArray()) {
            if (Character.isUpperCase(c) || !Character.isLetterOrDigit(c)) {
                return false;
            }
        }

        // Check for no immediate patterns
        for (int i = 0; i < password.length() - 1; i++) {
            if (password.charAt(i) == password.charAt(i + 1)) {
                return false;
            }
        }

        return true;
    }

    public static void main(String[] args) {
        System.out.println(isValidPassword("abcanan1")); // false
        System.out.println(isValidPassword("abc11se")); // false
        System.out.println(isValidPassword("123sd123")); // true
        System.out.println(isValidPassword("adfasdsdf")); // false
        System.out.println(isValidPassword("Aasdfasd12")); // false
    }
}
