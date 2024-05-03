// WAP creating 2 threads using Runnable interface. Print your name in the `run()` method of first class, and "Hello Java" in the `run()` method of second thread
class Thread1 implements Runnable {
    String name;
   
    Thread1(String name) {this.name = name;}
    public void run() {System.out.println(this.name);}
}

class Thread2 implements Runnable {
    public void run() {
        System.out.println("Hello Java");
    }
}

class Main {
    public static void main(String[] args) {
        Thread1 t1 = new Thread1("Ajay");
        Thread2 t2 = new Thread2();
        Thread thread1 = new Thread(t1);
        Thread thread2 = new Thread(t2);
        thread1.start();
        thread2.start();
    }
}