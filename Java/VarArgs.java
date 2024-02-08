package Java;

import java.lang.reflect.Array;
import java.util.Arrays;

public class VarArgs {
    
    public static void main(String[] args) {
        fun(2,3,9,5,6,7,7,4);
        
    }
    static void fun(int ...v){
        System.out.println(Arrays.toString(v));
        

    }
}
