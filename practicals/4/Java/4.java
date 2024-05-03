// WAP declaring a class Rectangle with data member’s length and breadth and member functions Input, Output and CalcArea
import java.util.Scanner;

class Rectangle {
    int length;
    int breadth;

    public void Input() {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter length: ");
        length = sc.nextInt();
        System.out.print("Enter breadth: ");
        breadth = sc.nextInt();
        sc.close();
    }

    public void Output() {
        System.out.println("Length: " + length);
        System.out.println("Breadth: " + breadth);
    }

    public void CalcArea() {
        System.out.println("Area: " + length * breadth);
    }
}

class Main {
    public static void main(String[] args) {
        Rectangle r = new Rectangle();
        r.Input();
        System.out.println();
        r.Output();
        r.CalcArea();
    }
}