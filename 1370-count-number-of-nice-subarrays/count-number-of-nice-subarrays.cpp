class Solution {
public:
 

    int atMost(vector<int>& nums, int k) {
        int i = 0;
        int j = 0;
        int maxvalue = 0;
        int countodd = 0;

        while (j < nums.size()) {

            if (nums[j] % 2 == 1) {
                countodd++;
            }

            while (countodd > k) {
                if (nums[i] % 2 == 1) {
                    countodd--;
                }
                i++;
            }

            maxvalue += (j - i + 1);
            j++;
        }

        return maxvalue;
    }

    int numberOfSubarrays(vector<int>& nums, int k) {
        return atMost(nums, k) - atMost(nums, k - 1);
    }
};
   