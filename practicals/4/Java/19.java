// WAP to demonstrate the concept of user defined exceptions
class MyException extends Exception {
    MyException(String message) {
        super(message);
    }
}

class Main {
    public static void main(String[] args) {
        try {
            throw new MyException("This is a user defined exception");
        } catch (MyException e) {
            System.out.println(e.getMessage());
        }
    }
}