package Java.Binary_Search;

public class Floor {
    class Solution {
        public static void main(String[] args) {
            int[] arr={2,3,4,6,7,8,78,99};
            int target=5;
            System.out.println(searchInsert(arr, target));
        }
        static int searchInsert(int[] arr, int target) {
    
            int start=0;
            int end= arr.length-1;
            while(start<=end){
                
                
                    int mid=start+(end-start)/2;
                    if(target==arr[mid]){
                        return mid;
                    }
                    else if(arr[mid]<target){
                        start=mid+1;
    
                    }
                    else{
                        end=mid-1;
                    }
                
            }
            return start;
        }
          
    }
         
}
