class myThread extends Thread {
    public void run() {
        try   {Thread.sleep(1000);} 
        catch (InterruptedException e) {e.printStackTrace();}
    }
}

class Main {
    public static void main(String[] args) {
        myThread t1 = new myThread();
        myThread t2 = new myThread();

        t1.start();
        t2.start();

        System.out.println("Number of active threads: " + Thread.activeCount());
    }
}