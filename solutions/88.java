class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        int i = n - 1;
        int j = m - 1;
        int lastIndex = n + m - 1;
         
        // start from last element in each array
        while (j >= 0)
        {
            /* End of nums1 is greater than end of nums2 */
            if (i >= 0 && nums1[i] > nums2[j])
            {
                nums1[lastIndex] = nums1[i];
                i--;
            } else
            { 
                nums1[lastIndex] = nums2[j];
                j--;
            }
            // Move indices
            lastIndex--;
        }
    }
}