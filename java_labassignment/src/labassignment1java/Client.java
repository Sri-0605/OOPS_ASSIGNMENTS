package labassignment1java;

//Declare an interface called Function
interface Function {
 int evaluate(int x);
}

//Create a class Half that implements Function
class Half implements Function {
 @Override
 public int evaluate(int x) {
     return x / 2;
 }
}

//Client class
public class Client {
 public static int[] halfArray(int[] arr) {
     Half half = new Half();
     int[] result = new int[arr.length];
     for (int i = 0; i < arr.length; i++) {
         result[i] = half.evaluate(arr[i]);
     }
     return result;
 }

 public static void main(String[] args) {
     int[] arr = {1, 2, 3, 4, 5};
     int[] result = halfArray(arr);
     for (int i : result) {
         System.out.print(i + " ");
     }
 }
}