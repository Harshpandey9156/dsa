package Java.Binary_Search;

public class Searchig2DMatrix {
    public static void main(String[] args) {
        
    }
     
        static boolean searchMatrix(int[][] matrix, int target) {
            if (matrix == null || matrix.length == 0 || matrix[0].length == 0) {
                return false;  // Empty matrix
            }
    
            int rows = matrix.length;
            int cols = matrix[0].length;
            int r = 0;
            int col = cols - 1;
    
            while (r < rows && col >= 0) {
                if (matrix[r][col] == target) {
                    return true;  // Target found
                }
    
                if (matrix[r][col] < target) {
                    r++;   // Move to the next row (downwards)
                } else {
                    col--;  // Move to the previous column (leftwards)
                }
            }
    
            return false;  // Target not found
        }
    }
    
    

