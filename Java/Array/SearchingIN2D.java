package Java.Array;

import java.util.Arrays;

public class SearchingIN2D {
    public static void main(String[] args) {
        int[][] arr={
            {1,3,4,5},
            {1,44,12,11,3},
            {3,5,7,78}
        };
        int target =12;
        int[] ans=Search(arr, target) ;
        System.out.println(Arrays.toString(ans));
        
    }
    static int[] Search(int[][] arr,int target){
        // int ans[]  ;
        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j < arr[i].length; j++) {
                if (arr[i][j]==target){
                    return new int[]{i,j};
                }

                
            }

            
            
        }
        return new int[]{-1,-1};

        
    }
}
