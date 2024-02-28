package Java.Binary_Search.Leetcode;

public class NextPermutation {
    public static void main(String[] args) {
        
    }
    public void nextPermutation(int[] nums) {
        int index = -1;
        for (int i = nums.length - 2; i >= 0; --i) {
            if (nums[i] < nums[i + 1]) {
                index = i;
                break;
            }
        }

        if (index == -1) {
            reverse(nums, 0, nums.length - 1);
        } else {
            for (int i = nums.length - 1; i > index; --i) {
                if (nums[i] > nums[index]) {
                    swap(nums, index, i);
                    break;
                }
            }
            reverse(nums, index + 1, nums.length - 1);
        }
    }

    public void swap(int[] nums, int i, int j) {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }

    public void reverse(int[] nums, int start, int end) {
        while (start < end) {
            swap(nums, start, end);
            start++;
            end--;
        }
    }
    
}
