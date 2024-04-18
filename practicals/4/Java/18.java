// Write a program to demonstrate unchecked exception
class Main {
    public static void main(String[] args) {
        int a = 10;
        int b = 0;
        int c;

        try {
            c = a / b;
            System.out.println("a / b = " + c);
        } catch (ArithmeticException e) {
            System.out.println("Division by zero");
        }
    }
}