package Java.Pattern;

public import java.util.Arrays;

public class ArrayRotation {

    public static void main(String[] args) {
       
    }

    public static void rotateArray(int[] arr, int rotations) {
        int length = arr.length;
        // Normalize the number of rotations to be within the length of the array
        rotations = rotations % length;
        
        // Create a temporary array to store elements that will be shifted
        int[] temp = new int[rotations];
        
        // Copy the first 'rotations' elements to the temporary array
        for (int i = 0; i < rotations; i++) {
            temp[i] = arr[i];
        }
        
        // Shift the remaining elements in the original array to the left
        for (int i = rotations; i < length; i++) {
            arr[i - rotations] = arr[i];
        }
        
        // Copy the elements from the temporary array to the end of the original array
        for (int i = 0; i < rotations; i++) {
            arr[length - rotations + i] = temp[i];
        }
    }
}
 {
    
}
