package Java.Binary_Search;

public class Mountain {
    public static void main(String[] args) {
        int[] arr = {24, 69, 100, 99, 79, 78, 67, 36, 26, 19};
        int ans = peakIndexInMountainArray(arr);
        System.out.println(ans);
    }

    static int peakIndexInMountainArray(int[] arr) {
        int start = 0;
        int end = arr.length - 1;

        while (start < end) {
            int mid = start + (end - start) / 2;

            if (arr[mid] > arr[mid + 1]) {
                // This may be the answer, so we adjust 'end' to mid
                end = mid;
            } else {
                // The peak must be on the right side, so we adjust 'start' to mid + 1
                start = mid + 1;
            }
        }

        // At the end of the loop, 'start' and 'end' will be equal, pointing to the peak index
        return start;
    }
}
