class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1,
                                  vector<int>& nums2) {

        // Binary search smaller array
        if(nums1.size() > nums2.size()) {
            return findMedianSortedArrays(nums2, nums1);
        }

        int m = nums1.size();
        int n = nums2.size();

        int low = 0;
        int high = m;

        int half = (m + n + 1) / 2;

        while(low <= high) {

            int i = low + (high - low) / 2;
            int j = half - i;

            int Aleft  = (i == 0) ? INT_MIN : nums1[i - 1];
            int Aright = (i == m) ? INT_MAX : nums1[i];

            int Bleft  = (j == 0) ? INT_MIN : nums2[j - 1];
            int Bright = (j == n) ? INT_MAX : nums2[j];

            // Correct partition
            if(Aleft <= Bright && Bleft <= Aright) {

                // Odd total
                if((m + n) % 2 == 1) {
                    return max(Aleft, Bleft);
                }

                // Even total
                return (max(Aleft, Bleft) +
                        min(Aright, Bright)) / 2.0;
            }

            // A has too many elements on left
            else if(Aleft > Bright) {
                high = i - 1;
            }

            // A has too few elements on left
            else {
                low = i + 1;
            }
        }

        return 0.0;
    }
};