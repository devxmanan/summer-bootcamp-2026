//check palindrome

import java.util.Scanner;

class Palindrome {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine().trim();

        int l = 0, r = str.length() - 1;
        while (l < r) {
            if (str.charAt(l) != str.charAt(r)) {
                break;
            }
            l++;
            r--;
        }

        if (l >= r) {
            System.out.println(str + " is a Palindrome");
        } else {
            System.out.println(str + " is not a Palindrome");
        }

        sc.close();
    }
}