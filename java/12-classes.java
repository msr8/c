class Foo {
    private int data;

    public void set(int x) {data = x;}
    public int get() {return data;}
}


class Main {
    public static void main(String[] args) {
       Foo obj = new Foo();
       obj.set(5);
       System.out.println(obj.get());
    }
}