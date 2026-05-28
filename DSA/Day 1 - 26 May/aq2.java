//Difference of first and last elements in an array 

import java.util.Scanner;

class Diff {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        int result = arr[0] - arr[n - 1];
        System.out.println(result);
        sc.close();
    }
}
