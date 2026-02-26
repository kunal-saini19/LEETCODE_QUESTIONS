class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
         int i = 0;
        int j = 0;
        int maxcount = 0;
        int count0 = 0;

        while (j < nums.size()) {

            if (nums[j] == 0) {
                count0++;
            }

            while (count0 > k) {
                if (nums[i] == 0) {
                    count0--;
                }
                i++;
            }

            maxcount = max(maxcount, j - i + 1);
            j++;
        }

        return maxcount;
    }
};