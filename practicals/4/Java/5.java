// Write a program to remove duplicates from sorted array
import java.util.ArrayList;

class Main {
    public static void main(String[] args) {
        int[] arr = {1, 1, 2, 2, 3, 3, 4, 4, 5, 5};
        ArrayList<Integer> unique = new ArrayList<Integer>();

        System.out.println("Original array:");
        for (int i : arr) {
            System.out.print(i + " ");
        }
        
        for (int i = 0; i < arr.length; i++) {
            if (i == 0 || arr[i] != arr[i-1]) {
                unique.add(arr[i]);
            }
        }

        System.out.println("\n\nUnique elements:");
        for (int i : unique) {
            System.out.print(i + " ");
        }
    }
}