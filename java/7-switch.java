class Main {
    public static void main(String[] args) {
        int day = 1;
        switch (day) {
            case 1:
                System.out.println("Monday");
                break;
            case 2: case 3: case 4: case 5: case 6: case 7:
                System.out.println("Not Monday");
                break;
            default:
                System.out.println("ERROR");
        }
    }
}