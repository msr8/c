class Main {
    public static void main(String[] args) {
        // Automatic Widenning Casting
        int    a = 5;
        double b = a;
        System.out.println(b);

        // Manual Narrowing Casting
        float c = 5.5f;
        int   d = (int)c;
        System.out.println(d);
    }
}