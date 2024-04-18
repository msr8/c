// WAP to demonstrate concept of `this`
class MyClass {
    int x;
    int y;

    MyClass(int x, int y) {
        this.x = x;
        this.y = y;
    }

    void print() {
        System.out.println("x = " + this.x + " | y = " + this.y);
    }
}

class Main {
    public static void main(String[] args) {
        MyClass obj = new MyClass(10, 20);
        obj.print();
    }
}