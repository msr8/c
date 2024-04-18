// WAP to demonstrate the concept of interface when two interfaces have unique methods and same data members
interface Interface1 {
    int x = 10;
    void print1();
}

interface Interface2 {
    int x = 20;
    void print2();
}

class Main implements Interface1, Interface2 {
    @Override
    public void print1() {
        System.out.println("x = " + Interface1.x);
    }

    @Override
    public void print2() {
        System.out.println("x = " + Interface2.x);
    }

    public static void main(String[] args) {
        Main obj = new Main();
        obj.print1();
        obj.print2();
    }
}