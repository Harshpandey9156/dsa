package Java.Binary_Search;

public class MedianOfTwoSorted {
    public static void main(String[] args) {
        int[] nums1 = {1,2};
        int[] nums2 = {3,4};
        double abc=findMedianSortedArrays(nums1,nums2);
        System.out.println(abc);
        
    }
    
        static double findMedianSortedArrays(int[] nums1, int[] nums2) {
    
            int[] c =Merge(nums1,nums2);
            int start=0;
            int end=c.length-1;
    
            // int mid=start +(end-start)/2;
    
                    int mid=start+(end-start)/2;
                    System.out.println(mid);
    
                    double arr=(c[mid]+c[mid+1])/2.0;
                    return arr;
                   
                
            
    
    
          
        }
        static int[] Merge(int[] arr, int[] arr2) {
        int[] c = new int[arr.length + arr2.length];
    
        for (int i = 0; i < arr.length; i++) {
            c[i] = arr[i];
        }
    
        for (int i = 0; i < arr2.length; i++) {
            c[i + arr.length] = arr2[i];
        }
    
        return c;
    }
    
    }

