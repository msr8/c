// WAP to demonstrate use of method overloading to calculate area of square, rectangle and triangle
class Main {
    static double area(int side) {
        return side * side;
    }

    static double area(int length, int breadth) {
        return length * breadth;
    }

    static double area(int base, double height) {
        return 0.5 * base * height;
    }

    public static void main(String[] args) {
        System.out.println("Area of square with side 5: " + area(5));
        System.out.println("Area of rectangle with length 5 and breadth 10: " + area(5, 10));
        System.out.println("Area of triangle with base 5 and height 10: " + area(5, 10.0));
    }
}