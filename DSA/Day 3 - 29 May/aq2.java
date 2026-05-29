//Generate username from name and id in pattern: firstname_lastname<id>

import java.util.Scanner;
class generateUsername{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String name = sc.nextLine().trim().toLowerCase();
        String id = sc.nextLine();
        String username = "";
        String firstname = "";
        String lastname = "";
        for(int i=0; i<name.length(); i++){
            char ch = name.charAt(i);
            if(ch!=' '){
                firstname += ch;
            }
            else{
                break;
            }
        }
        for(int i=name.length()-1; i>=0; i--){
            char ch = name.charAt(i);
            if(ch!=' '){
                lastname = ch + lastname;
            }
            else{
                break;
            }
        }
        username = firstname+"_"+lastname+id;
        System.out.println(username);
    }
}