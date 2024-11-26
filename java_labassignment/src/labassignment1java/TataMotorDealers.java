package labassignment1java;

public class TataMotorDealers {
    public static String modelOfCategory(String category) {
        String model = "";
        switch (category.toUpperCase()) {
            case "SUV":
                model = "TATA SAFARI";
                break;
            case "SEDAN":
                model = "TATA INDIGO";
                break;
            case "ECONOMY":
                model = "TATA INDICA";
                break;
            case "MINI":
                model = "TATA NANO";
                break;
            default:
                model = "Category not found";
        }
        return model;
    }

    public static void main(String[] args) {
        System.out.println(modelOfCategory("SUV")); // Output: TATA SAFARI
        System.out.println(modelOfCategory("SEDAN")); // Output: TATA INDIGO
        System.out.println(modelOfCategory("ECONOMY")); // Output: TATA INDICA
        System.out.println(modelOfCategory("MINI")); // Output: TATA NANO
        System.out.println(modelOfCategory("TRUCK")); // Output: Category not found
    }
}