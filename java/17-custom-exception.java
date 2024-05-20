// This will be a checked exception
class DivideByZeroException extends Exception {
    public DivideByZeroException(int x) {
        super("You cannot divide " + x + " by 0");
    }
}

class Main {
    public static void main(String[] args) throws DivideByZeroException {
        int a = 10, b = 0;

        if (b == 0) {
            throw new DivideByZeroException(a);
        }
        System.out.println(a / b);
    }
}