// WAP to demonstrate creation of multiple child threads
class MyRunnable implements Runnable {
    Thread t;
    String name;

    MyRunnable(String name) {
        this.name = name;
    }

    @Override
    public void run() {
        System.out.println(this.name + " has started");
        try {Thread.sleep(1000);}
        catch (InterruptedException e) {}
        System.out.println(this.name + " has finished");
    }
}


class Main {
    public static void main(String[] args) {
        System.out.println("Main thread has started");

        MyRunnable r1 = new MyRunnable("Thread 1");
        MyRunnable r2 = new MyRunnable("Thread 2");
        MyRunnable r3 = new MyRunnable("Thread 3");

        Thread t1 = new Thread(r1);
        Thread t2 = new Thread(r2);
        Thread t3 = new Thread(r3);
        
        t1.start();
        t2.start();
        t3.start();

        System.out.println("Main thread has finished");
    }
}