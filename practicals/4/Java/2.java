// WAP to demonstrate the use of arithmetic and bitwise operators
class Main {
    public static void main(String[] args) {
        int a = 10;
        int b = 20;
        int c;

        System.out.println("a = " + a + " | b = " + b);

        c = a + b;
        System.out.println("a + b = " + c);
        c = a - b;
        System.out.println("a - b = " + c);
        c = a * b;
        System.out.println("a * b = " + c);
        c = a / b;
        System.out.println("a / b = " + c);
        c = a % b;
        System.out.println("a % b = " + c);
        c = a & b;
        System.out.println("a & b = " + c);
        c = a | b;
        System.out.println("a | b = " + c);
        c = a ^ b;
        System.out.println("a ^ b = " + c);
        c = ~a;
        System.out.println("~a = " + c);
        c = a << 2;
        System.out.println("a << 2 = " + c);
        c = a >> 2;
        System.out.println("a >> 2 = " + c);
        c = a >>> 2;
        System.out.println("a >>> 2 = " + c);
    }
}