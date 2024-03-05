package Java.Binary_Search.Leetcode;

import java.util.ArrayList;
import java.util.List;

public class PascalTriangle {
    //leetcode problem 
    
    public static void main(String[] args) {
        
    }
    class Solution {
    public List<List<Integer>> generate(int numRows) {
        List<List<Integer>> triangle = new ArrayList<>();

        if (numRows == 0) {
            return triangle;
        }

        // First row
        triangle.add(new ArrayList<>());
        triangle.get(0).add(1);

        for (int row = 1; row < numRows; row++) {
            List<Integer> currentRow = new ArrayList<>();
            List<Integer> previousRow = triangle.get(row - 1);
            currentRow.add(1);
            for (int j = 1; j < row; j++) {
                currentRow.add(previousRow.get(j - 1) + previousRow.get(j));
            }
            currentRow.add(1);

            triangle.add(currentRow);
        }

        return triangle;
    }
    
}
}
