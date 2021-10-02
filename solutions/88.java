class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        int i = m - 1;
        int j = n - 1;
        if (n == 0) {
            return;
        }
        if (m == 0) {
            while(j >= 0) {
                nums1[j] = nums2[j];
                j--;
            }
            return;
        }
        // start from last element
        int lastIndex = n + m - 1;
        while (j >= 0)
        {
            if (i >= 0 && nums1[i] > nums2[j]) {
                nums1[lastIndex--] = nums1[i--];
            } else { 
                nums1[lastIndex--] = nums2[j--];
            }
        }
    }
}