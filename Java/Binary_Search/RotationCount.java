package Java.Binary_Search;

public class RotationCount {
    public static void main(String[] args) {
        int[] arr={0,1,2,3,4,5,6,7};
        System.out.println(RotationCountFn(arr) );
    }

    private static int RotationCountFn(int[] nums){
        int pivot =findPivot(nums);
        return pivot+1;


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
     
    
}
