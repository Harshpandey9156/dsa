package Java.Binary_Search;

public class SearchingINBinarySearch2D {
    public static void main(String[] args) {
        
        
    }
    static int[] search(int[][] matrix,int target ){
        int r=0;
        int col=matrix.length-1;
        while(r<matrix.length-1 && col>=0){
            if(matrix[r][col]==target){
                return new int[]{r,col};
            }
            if(matrix[r][col]>target){
                r=r+1;
                
            }
            else{
                col=col-1;

            }
            
            
            

        }
        return new int[]{-1,-1};
    }

}
