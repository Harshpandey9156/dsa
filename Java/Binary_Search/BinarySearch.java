package Java.Binary_Search;

import java.lang.reflect.Array;
import java.util.Arrays;
import java.util.Scanner;

// import Java.Array.input;

public class BinarySearch {
    public static void main(String[] args) {
        Scanner in =new Scanner(System.in);
        int[]arr=new int[7];
        for (int i = 0; i < 7; i++) {
             arr[i]=in.nextInt();
            
        }
        System.out.print("Enter the target element : ");
        int target=in.nextInt();
        // System.out.println(Arrays.toString(arr));
        // int start=0;
        // int end= arr.length+1;
        System.out.println(BinarySearchh(arr,target));
        
    //     while(start<=end){
            
            
    //             int mid=start+(end-start)/2;
    //             if(target==arr[mid]){
    //                 System.out.println(mid);
    //                 break;
    //             }
    //             else if(arr[mid]<target){
    //                 start=mid+1;

    //             }
    //             else{
    //                 end=mid-1;
    //             }
            
    //     }


}



    static int BinarySearchh(int[] arr,int target)
    {
        int start=0;
        int end= arr.length+1;
        while(start<=end){
            
            
                int mid=start+(end-start)/2;
                if(target==arr[mid]){
                    return mid;
                }
                else if(arr[mid]<target){
                    start=mid+1;

                }
                else{
                    end=mid-1;
                }
            
        }
        return -1;
    }
}

    
    
    

