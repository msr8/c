class Base {
    int x;

    Base(int x) {
        this.x = x;
    }
}

class Derived extends Base {
    int x;

    Derived(int x, int y) {
        super(x);
        this.x = y;
    }

    void display() {
        System.out.println("Base x:    " + super.x);
        System.out.println("Derived x: " + x);
    }
}



class Main {
    public static void main(String[] args) {
        Derived d = new Derived(10, 20);
        d.display();
    }
}