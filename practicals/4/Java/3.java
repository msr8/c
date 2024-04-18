// WAP to print all the prime numbers within a range (e.g. 1 to 100)
import java.util.ArrayList;

class Main {
    public static boolean isPrime(int n) {
        boolean ret = true;
        for (int i = 2; i <= n/2; i++) {
            if (n % i == 0) {
                ret = false;
                break;
            }
        }
        return ret;
    }

    public static void main(String[] args) {
        ArrayList<Integer> primes = new ArrayList<Integer>();
        for (int i = 2; i <= 100; i++) {
            if (isPrime(i)) {
                primes.add(i);
            }
        }

        System.out.println("Prime numbers between 1 and 100:");
        for (int i : primes) {
            System.out.print(i + " ");
        }
    }
}