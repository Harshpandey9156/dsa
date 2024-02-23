

public class SearchInMountain {
    public static void main(String[] args) {
        
    }

    static int search(int[] arr,int target){
        int peak=peakIndexInMountainArray(arr);
        int firstTry=orderSearch(arr, target, 0, peak);
        if(firstTry!=-1){
            return firstTry;

        }
        else{
           return orderSearch(arr, target, peak+1, arr.length-1);
        }

    }




    static int peakIndexInMountainArray(int[] arr) {
        int start=0;
        int end=arr.length -1;
        while(start<end){
            int mid=start+(end-start)/2;
            if(arr[mid]>arr[mid+1]){
                //this may be the answer so that why end !=mid -1
                  end=mid;
            }
            else {
                 start=mid+1;
            }
            // else if(start ==end){
            //     return mid;
            // }   if(arr[mid]<arr[mid+1])
        }
        return start;
    }
    static int orderSearch(int[] arr,int target, int start ,int end ){
        
       
        boolean is=arr[start]<arr[end];

        while(start<=end){
            
            
                int mid=start+(end-start)/2;
                if(target==arr[mid]){
                    return mid;
                }

            if (is){
                 if(arr[mid]<target){
                    start=mid+1;

                }
                else {
                    end=mid-1;
                }
            }
            else {
                 if(arr[mid]>target){
                    start=mid+1;

                }
                else{
                    end=mid-1;
                }
            }
            
        }
        return -1;
    
    }



    
}
