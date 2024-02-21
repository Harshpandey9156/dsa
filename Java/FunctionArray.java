package Java;

import java.lang.reflect.Array;
import java.util.Arrays;

public class FunctionArray {
    public static void main(String[] args) {
        int[] arr={2,3,4,5};
        System.out.println(Arrays.toString(arr));
        array(arr);  
        System.out.println(Arrays.toString(arr));

        
    }
      static void array(int[] arr){
        arr[0]=22;

    }
    
}
