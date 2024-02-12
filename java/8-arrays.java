class Main {
    public static void main(String[] args) {
        // 1D array
        int arr[] = {1, 2, 3, 4, 5};
        System.out.println(arr.length); // 5
        for (int i = 0; i < arr.length; i++) {
            System.out.println(arr[i]);
        }

        System.out.println("-------------------");

        // 2D array
        int arr2[][] = {{1, 2, 3}, {4, 5, 6}};
        System.out.println(arr2.length);    // 2
        System.out.println(arr2[0].length); // 3
        for (int i = 0; i < arr2.length; i++) {
            for (int j = 0; j < arr2[i].length; j++) {
                System.out.println(arr2[i][j]);
            }
        }        
    }
}