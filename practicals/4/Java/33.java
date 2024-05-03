// WAP to perform basic Calculator operations. Make a menu driven program to select operation to perform (+ - * / ). Take 2 integers and perform operation as chosen by user
import java.io.*;

class Main {
    public static void main(String[] args) {
        try {
            int a,b,chc;
            BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
            
            System.out.print("Please enter the first number: ");
            a = Integer.parseInt(br.readLine());
            System.out.print("Please enter the second number: ");
            b = Integer.parseInt(br.readLine());

            boolean loop = true;
            while (loop) {
                System.out.println();
                System.out.println("Please select the operation to perform:");
                System.out.println("1. Addition");
                System.out.println("2. Subtraction");
                System.out.println("3. Multiplication");
                System.out.println("4. Division");
                System.out.println("5. Exit");
                System.out.print("Enter your choice: ");
                chc = Integer.parseInt(br.readLine());

                switch (chc) {
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
                        System.out.println("The division of " + a + " by " + b + " is " + ((float)a / b));
                        break;
                    case 5:
                        loop = false;
                        break;
                    default:
                        System.out.println("Invalid choice");
                }
            }

            br.close();
        }
        
        catch (Exception e) {System.out.println(e);}
    }
}