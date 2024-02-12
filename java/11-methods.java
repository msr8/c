class Main {
    static void sayHello() {
        System.out.println("Hello, World!");
    }
    
    static int   add(int a,   int b)     {return a+b;}
    static float add(float a, float b) {return a+b;}

    public static void main(String[] args) {
        sayHello();
        System.out.println(add(5, 10)); // 15
        System.out.println(add(1.7f, 3.1f)); // 4.8
    }
}