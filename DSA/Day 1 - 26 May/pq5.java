//Delete smallest element from an array

import java.util.Scanner;

class Pq5 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int size = in.nextInt();
        int[] arr = new int[size];
        for (int i = 0; i < size; i++) {
            arr[i] = in.nextInt();
        }
        int min = arr[0];
        int index = 0;
        for (int i = 1; i < size; i++) {
            if (arr[i] < min) {
                min = arr[i];
                index = i;
            }
        }
        for (int i = index; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        for (int i = 0; i < size - 1; i++) {
            System.out.print(arr[i] + " ");
        }
        in.close();
    }
}
