class MyCounter extends Thread {
    private int start;
    private int end;

    public MyCounter(int start, int end, String name) {
        this.start = start;
        this.end   = end;
        this.setName(name);
    }

    public void run() {
        for (int i=start; i<=end; i++) {
            try {Thread.sleep(1000);}
            catch (InterruptedException e) {e.printStackTrace();}
            System.out.println("Thread " + this.getName() + ": " + i);
        }
    }
}



class Main {
    public static void main(String[] args) {
        MyCounter my_counter_1 = new MyCounter(1,  5,  "Alpha");
        MyCounter my_counter_2 = new MyCounter(11, 15, "Beta");

        my_counter_1.start();
        my_counter_2.start();

        System.out.println("Number of active threads: " + Thread.activeCount());
    }
}