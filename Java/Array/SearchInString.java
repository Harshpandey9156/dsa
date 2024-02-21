package Java.Array;

public class SearchInString {
    public static void main(String[] args) {
        String abc="Harsh";
        char a='a';
        SearchingInString(abc, a);
        System.out.println(SearchingInString2(abc, a));
    }
   static boolean SearchingInString(String str,char a){
    if (str.length()==0){
        return false;
    }
    for(int i=0;i<str.length();i++){
        if(a==str.charAt(i));
        return true;
    }
    return false;

    }

    static boolean SearchingInString2(String str,char a){
        if (str.length()==0){
            return false;
        }
        for(char ch:str.toCharArray()){
            if(a==ch){
                return true;
            }
        }
        return false;
    
        }
    
}
