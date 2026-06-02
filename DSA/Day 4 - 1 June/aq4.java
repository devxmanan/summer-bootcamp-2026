//Rotate array from given position according to a type 'L' or 'R' and then switch the case upto given position.

import java.util.*;
class Rotate{
    public static void main(String args[]){
        String str = in.nextLine();
        int pos = in.nextInt();
        char ch = in.next().charAt(0);

        int l = str.length();
        String rotated;
        if(ch == 'L'){
            rotated = str.substring(pos) + str.substring(0, pos);
        }
        else{
            rotated = str.substring(l-pos) + str.substring(0, l-pos);
        }
        StringBuilder result = new StringBuilder();
        for(int i =0; i < pos; i++){
            char c = rotated.charAt(i);
            if(Character.isLowerCase(c)){
                res.append(Character.toUpperCase(c));
            }
            else{
                res.append(Character.toLowerCase(c));
            }
        }
        result.append(rotated.substring(pos, l));
        System.out.println(res);
    }
}