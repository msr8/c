// WAP that has two threads where one thread prints table of 5 and other thread prints a string 10 times. Set and display the names and priorities of these threads

class Thread1 extends Thread {
    public void run() {
        for (int i = 1; i <= 10; i++) {
            try   {Thread.sleep(500);}
            catch (InterruptedException e) {}
            System.out.println("5 * " + i + " = " + 5*i);
        }
    }
}

class Thread2 extends Thread {
    public void run() {
        for (int i = 1; i <= 10; i++) {
            try   {Thread.sleep(500);}
            catch (InterruptedException e) {}
            System.out.println("Hello World");
        }
    }
}


class Main {
    public static void main(String[] args) {
        Thread1 t1 = new Thread1();
        Thread2 t2 = new Thread2();

        t1.setName("Table of 5");
        t2.setName("Hello World");

        t1.setPriority(Thread.MAX_PRIORITY);
        t2.setPriority(Thread.MIN_PRIORITY);

        t1.start();
        t2.start();

        System.out.println("Thread 1: " + t1.getName() + "  | Priority: " + t1.getPriority());
        System.out.println("Thread 2: " + t2.getName() +  " | Priority: " + t2.getPriority());
        System.out.println();
    }
}