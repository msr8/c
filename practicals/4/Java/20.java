// WAP to input salary of a person along with his name, if the salary is less than 85,000 then throw an arithmetic exception with a proper message “not eligible for loan”
import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter name: ");
        String name = sc.nextLine();

        System.out.print("Enter salary: ");
        int salary = sc.nextInt();
        
        sc.close();

        if (salary < 85000) {
            throw new ArithmeticException(name + " is not eligible for loan");
        }
    }
}