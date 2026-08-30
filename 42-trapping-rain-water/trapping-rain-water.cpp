class Solution {
public:
    int trap(vector<int>& nums) {

        int n = nums.size();
        int ans = 0;

        int i = 0;

        while (i < n - 1) {

            // Agar left tower 0 hai to skip
            if (nums[i] == 0) {
                i++;
                continue;
            }

            int j = i + 1;

            // Right side mein suitable boundary dhoondo
            while (j < n && nums[j] < nums[i]) {
                j++;
            }

            // Agar equal ya greater boundary mil gayi
            if (j < n) {

                int waterLevel = min(nums[i], nums[j]);

                // Beech ke towers check karo
                for (int k = i + 1; k < j; k++) {

                    int water = waterLevel - nums[k];

                    if (water > 0) {
                        ans += water;
                    }
                }

                // Ab right boundary new left boundary banegi
                i = j;
            }

            // Agar equal/greater boundary nahi mili
            else {

                // Right side ka maximum tower dhoondo
                int maxIndex = i + 1;

                for (int k = i + 1; k < n; k++) {
                    if (nums[k] > nums[maxIndex]) {
                        maxIndex = k;
                    }
                }

                // Agar koi valid boundary nahi hai
                if (nums[maxIndex] == 0) {
                    break;
                }

                int waterLevel = min(nums[i], nums[maxIndex]);

                // Water calculate karo
                for (int k = i + 1; k < maxIndex; k++) {

                    int water = waterLevel - nums[k];

                    if (water > 0) {
                        ans += water;
                    }
                }

                i = maxIndex;
            }
        }

        return ans;
    }
};