package Java.Array;

import java.io.LineNumberReader;

public class LinearSearch {
    public static void main(String[] args) {
        int[] arr={2,3,4,6,8,9,14};
        int target=14;
        // LinearSearch2(arr,target);
        System.out.println(LinearSearch2(arr, target));

        


    }
    static int LinearSearch2 (int[] arr,int Target)
    {
        if(arr.length==0){
            return -1;
        }
        for(int i=0;i<arr.length;i++){
            if(arr[i]==Target){
                return i;

                
            }
            // return i;
            // System.out.println(arr[i]);
        }
        return -1;
    }
    
}
