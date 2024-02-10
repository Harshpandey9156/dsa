package Java.Array;

public class MinimumInArray {
    public static void main(String[] args) {
        int[] arr={5,6,8,5,-4,55,4,54,8};
        minimum(arr);
        System.out.println(minimum(arr));

    
    }
    static int minimum(int[] arrs){
        if(arrs.length==0){
            return 0;
        }
        int temp=arrs[0];
        for (int i=0;i<arrs.length;i++){
            if(temp>arrs[i]){
                temp=arrs[i];

            }
            

        }
        return temp;

    }
}
