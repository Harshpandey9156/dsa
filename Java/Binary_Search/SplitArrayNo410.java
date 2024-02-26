package Java.Binary_Search;

public class SplitArrayNo410 {
    public static void main(String[] args) {
        
    }
    public int splitArray(int[] nums, int k) {
        int start=0;
        int end=0;
        int mid=start+(end-start)/2;
        for(int i=0;i<nums.length;i++){
            start=Math.max(start, nums[i]);//at the end it will return the start Or the maximum sum For the Values
            end=end+nums[i];
        }
        //binary Search fir that
        while(start<end){
            int sum=0;
            int pieces=1;

            for(int num:nums){
                if(sum+num>mid){
                //you cannt add this to sybArray ,make a new array
                //you add this num in the new subarray,
                sum=num;
                pieces++;
                    
            }
            else{
                sum+=num;
            }
            }
            if(pieces>k){
                start= mid+1;
            }
            else{
                end=mid;
            }

        }

        return end; //  here Start=end

        
    }
}
