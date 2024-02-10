package Java.Array;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Scanner;

public class ReverseArray {
   
    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        ArrayList<ArrayList<Integer>> list=new ArrayList<>();
        // for(int i=0;i<3;i++){
        //     list.add(new ArrayList<>());
        // }
        // for(int i=0;i<4;i++){
        // // int[] arr= new int[3];
        // int[] arr=Integer.parseInt(System.in);
        // }

        int[] arr={1,3,5,8,54,77,86};
        swap(arr,1,4);
        System.out.println(Arrays.toString(arr));

        Reverse(arr);
        System.out.println(Arrays.toString(arr));

        
}
static void swap(int[] arr,int index1,int index2){
    int temp=arr[index1];
    arr[index1]=arr[index2];
    arr[index2]=temp;
}

static void Reverse(int[] arr){
    int start=0;
    int end=arr.length-1;

    for(int i=0; i<arr.length;i++){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        while(start<end){
        start++;
        end--;
        }
    }

}

}


