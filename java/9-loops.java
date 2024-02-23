class Main {
    public static void main(String[] args) {
        // For loop
        for (int i = 0; i < 5; i++) {
            System.out.println(i);
        }

        // For loop w/ arrays
        int[] arr = {1, 2, 3, 4, 5};
        for (int i : arr) {
            System.out.println(i);
        }
        
        // While loop
        int j = 0;
        while (j < 5) {
            System.out.println(j);
            j++;
        }

        // Do-while loop
        int k = 0;
        do {
            System.out.println(k);
            k++;
        } while (k < 5);
    }
}