// WAP to calculate first n Fibonacci numbers and store in an array
import java.util.ArrayList;

class Main {
    public static void main(String[] args) {
        int n = 10;
        ArrayList<Integer> fib = new ArrayList<Integer>();
        fib.add(0);
        fib.add(1);
        for (int i = 2; i < n; i++) {
            fib.add(fib.get(i-1) + fib.get(i-2));
        }

        System.out.println("First " + n + " Fibonacci numbers:");
        for (int i : fib) {
            System.out.print(i + " ");
        }
    }
}