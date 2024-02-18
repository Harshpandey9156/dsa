package Java.Binary_Search;

import java.util.Scanner;

public class OrderAugnositcBS {
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
        System.out.println(orderSearch(arr,target));
        
    }



    static int orderSearch(int[] arr,int target){
        
        int start=0;
        int end= arr.length-1;
        boolean is=arr[start]<arr[end];

        while(start<=end){
            
            
                int mid=start+(end-start)/2;
                if(target==arr[mid]){
                    return mid;
                }

            if (is){
                 if(arr[mid]<target){
                    start=mid+1;

                }
                else {
                    end=mid-1;
                }
            }
            else {
                 if(arr[mid]>target){
                    start=mid+1;

                }
                else{
                    end=mid-1;
                }
            }
            
        }
        return -1;
    
    }
    
}
