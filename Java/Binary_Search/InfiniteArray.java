package Java.Binary_Search;

public class InfiniteArray {
    public static void main(String[] args) {
        int[] arr={2,4,6,8,12,16,24,39};
        int target=12;
        System.out.println(ans(arr, target));
        
    }
    static int ans(int[] arr ,int target){
        //first we find the range of that
        //finding the range of the 
        int start =0;
        int end=1;

        while(target>arr[end]){
            int newS=end+1;//this is new start
            //double the sixze of the array
             end=end+(end-start+1)*2;
             start=newS;
        }
        return Infinite(arr, target, start, end);

    }
    static int Infinite(int[] arr,int target ,int start , int end)
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
