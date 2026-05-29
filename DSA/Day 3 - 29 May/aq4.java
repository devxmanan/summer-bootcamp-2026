//Replace a specified pattern from a string with the given character

import java.util.Scanner;
class ReplacePattern{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();
        String pattern = sc.nextLine();
        char ch = sc.nextLine().charAt(0);
        String result = "";
        for(int i=0; i<str.length(); i++){
            if(str.substring(i, i+pattern.length()).equals(pattern)){
                result += ch;
                i += pattern.length()-1;
            }
            else{
                result += str.charAt(i);
            }
        }
        System.out.println(result);
    }
}