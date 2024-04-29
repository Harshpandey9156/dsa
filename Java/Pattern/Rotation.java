package Java.Pattern;
import java.util.Arrays;
 


public class Rotation {


    public static void rotateArray(int[] arr, int rotations) {
        int length = arr.length;

        rotations = rotations % length;
        
        
        int[] temp = new int[rotations];
        
        for (int i = 0; i < rotations; i++) {
            temp[i] = arr[i];
        }
        
        
        for (int i = rotations; i < length; i++) {
            arr[i - rotations] = arr[i];
        }
    }

    public static void main(String[] args) {
        int[] arr = {1, 2, 3, 4, 5};
        int rotations = 2; // Number of rotations
        // Scanner in= new Scanner(System.in) ;
        
        System.out.println("Original Array: " + Arrays.toString(arr));
        
        rotateArray(arr, rotations);
        
        System.out.println("Array after " + rotations + " rotations: " + Arrays.toString(arr));
    }
    

}
