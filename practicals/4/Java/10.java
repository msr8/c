// WAP to demonstrate the use of static variable, static method and static block
class StaticStuff {
    static int x = 10;
    static int y = 20;

    static {
        System.out.println("StaticStuff has been loaded");
    }

    static void print() {
        System.out.println("x = " + x + " | y = " + y);
    }
}

class Main {
    public static void main(String[] args) {
        StaticStuff.print();
    }
}