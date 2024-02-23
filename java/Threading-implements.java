

class MyCounter implements Runnable{
    private int start;
    private int end;

    public MyCounter(int start, int end) {
        this.start = start;
        this.end = end;
    }

    public void run() {
        for (int i=start; i<=end; i++) {
            try {Thread.sleep(1000);}
            catch (InterruptedException e) {e.printStackTrace();}
            System.out.println(i);
        }
    }
}



class Main {
    public static void main(String[] args) {
        MyCounter my_counter_1 = new MyCounter(1, 5);
        MyCounter my_counter_2 = new MyCounter(11, 15);

        Thread t1 = new Thread(my_counter_1);
        Thread t2 = new Thread(my_counter_2);

        t1.start();
        t2.start();

        System.out.println("Main thread finished!");
    }
}


