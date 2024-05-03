// WAP to perform basic Calculator operations. Make a menu driven program to select operation to perform (+ - * / ). Take 2 integers and perform operation as chosen by user
import java.io.*;

class Main {
    public static void main(String[] args) {
        try {
            BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
            System.out.print("Please enter the first number: ");
            int a = Integer.parseInt(br.readLine());
            System.out.print("Please enter the second number: ");
            int b = Integer.parseInt(br.readLine());

            System.out.println("Please select the operation to perform:");
            System.out.println("1. Addition");
            System.out.println("2. Subtraction");
            System.out.println("3. Multiplication");
            System.out.println("4. Division");
            System.out.print("Enter your choice: ");
            int choice = Integer.parseInt(br.readLine());

            switch (choice) {
                case 1:
                    System.out.println("The sum of " + a + " and " + b + " is " + (a + b));
                    break;
                case 2:
                    System.out.println("The difference of " + a + " and " + b + " is " + (a - b));
                    break;
                case 3:
                    System.out.println("The product of " + a + " and " + b + " is " + (a * b));
                    break;
                case 4:
                    System.out.println("The division of " + a + " by " + b + " is " + (a / b));
                    break;
                default:
                    System.out.println("Invalid choice");
            }
            br.close();
        }
        
        catch (Exception e) {System.out.println(e);}
    }
}