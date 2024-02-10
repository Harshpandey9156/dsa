package Java;

import java.util.Scanner;


public class MultiDimension {
    public static void main(String[] args) {
        int[][] arr=new int[3][];
        int[][] arr2D={

            {1,2,3,4},
            {4,5,6},
            {7,8,3}
        };
        Scanner in =new Scanner(System.in);
        for(int row =0 ;row<=arr.length;row++){
            for(int column=0; column<arr[row].length;column++){
                arr[row][column] =in.nextInt();
                System.out.println("hellp");
                
            }
        }
        


    }
}
