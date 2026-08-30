class Solution {
public:
    int trap(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;

        int i = 0;

        while (i < n - 1) {

            // Your condition: skip zero as a left boundary
            if (nums[i] == 0) {
                i++;
                continue;
            }

            int j = i + 1;

            // Search for a tower >= nums[i]
            while (j < n && nums[j] < nums[i]) {
                j++;
            }

            // If no equal or taller tower exists,
            // find the tallest tower on the right
            if (j == n) {

                j = i + 1;

                for (int k = i + 1; k < n; k++) {
                    if (nums[k] > nums[j]) {
                        j = k;
                    }
                }
            }

            // Calculate water between i and j
            int waterLevel = min(nums[i], nums[j]);

            for (int k = i + 1; k < j; k++) {
                if (waterLevel > nums[k]) {
                    ans += waterLevel - nums[k];
                }
            }

            // Move to the right boundary
            i = j;
        }

        return ans;
    }
};