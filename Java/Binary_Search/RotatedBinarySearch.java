package Java.Binary_Search;

public class RotatedBinarySearch {
    public static void main(String[] args) {
        
    }
    public int search(int[] arr, int target) {
        int pivot = findPivot(arr);
        
        if (pivot == -1) {
            return binarySearch(arr, target, 0, arr.length - 1);
        }
        
        if (arr[pivot] == target) {
            return pivot;
        }
        
        if (target > arr[0]) {
            return binarySearch(arr, target, 0, pivot - 1);
        }  
        return binarySearch(arr, target, pivot + 1, arr.length - 1);
    }
    static int findPivot(int[] arr){
        int start=0;
        int end=arr.length;

        while(start<=end){
            int mid=start+ (end-start)/2;
            if(mid < end && arr[mid]>arr[mid+1]){
                return mid;

            }
            if(mid > start && arr[mid]<arr[mid-1]){
                return mid;

            }
            if (arr[mid] < arr[start]) {
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }
        return -1;
    }
    //with dublicacy in the array
    static int findPivotWithDublicacy(int[] arr){
        int start=0;
        int end=arr.length;

        while(start<=end){
            int mid=start+ (end-start)/2;
            if(mid < end && arr[mid]>arr[mid+1]){
                return mid;

            }
            if(mid > start && arr[mid]<arr[mid-1]){
                return mid;

            }
            if(arr[mid]==arr[start] && arr[mid]==arr[end]){
                if(arr[start]>arr[start+1]){
                    return start;
                }
                start++;
                if(arr[end]<arr[end-1]){
                    return end-1;
                }
                end--;
            }
        }
        return -1;
    }
    static int binarySearch(int[] arr,int target, int start ,int end)
    {
        
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
        return -1;
    }
}

