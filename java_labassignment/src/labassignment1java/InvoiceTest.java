package labassignment1java;


public class InvoiceTest {

	public static void main(String[] args) {
		 // Create an instance of Invoice
        INVOICE invoice = new INVOICE("1234", "Hammer", 2, 19.99);

        // Test getters and setters
        System.out.println("Part Number: " + invoice.getPartNumber());
        System.out.println("Part Description: " + invoice.getPartDescription());
        System.out.println("Quantity: " + invoice.getQuantity());
        System.out.println("Price Per Item: " + invoice.getPricePerItem());

        // Test getInvoiceAmount method
        System.out.println("Invoice Amount: " + invoice.getInvoiceAmount());

        // Test setting invalid quantity and price
        invoice.setQuantity(-1);
        invoice.setPricePerItem(-10.0);
        System.out.println("Invoice Amount after setting invalid quantity and price: " + invoice.getInvoiceAmount());

	}

}
