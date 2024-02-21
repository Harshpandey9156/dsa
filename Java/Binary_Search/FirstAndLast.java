package Java.Binary_Search;

public class FirstAndLast {
    public static void main(String[] args) {
        
        
    }


    static int[] searchRange(int[] arr, int target) {
        int[] ans={-1,-1};
        return ans;
    }

    //return the function which we are calling it twice for left and the write 
    int search(int[] arr ,int target ,boolean FirstStartIndex){
        int ans=-1;
        
        int start=0;
        int end= arr.length+1;
        while(start<=end){
            
            
                int mid=start+(end-start)/2;
                if(target==arr[mid]){
                    ans= mid;
                    if(FirstStartIndex){
                        end=mid-1;

                    }
                    else{
                        start=mid+1;
                    }
                }
                else if(arr[mid]<target){
                    start=mid+1;

                }
                else{
                    end=mid-1;
                }
            
        }
        return ans;
    }

    }

        
       
