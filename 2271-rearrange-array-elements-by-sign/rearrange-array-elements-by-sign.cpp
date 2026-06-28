class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>positive;
        vector<int>negetive;
        for(int i=0;i<nums.size();i++){
            if (nums[i]>0) positive.push_back(nums[i]);
            if (nums[i]<0) negetive.push_back(nums[i]); 
        }
        int right=0;
        int left =0;
        vector<int>ans;
        while(right<positive.size() && left<negetive.size()){
            ans.push_back(positive[right]);
            right++;
            ans.push_back(negetive[left]);
            left++;
        }
        return ans;
    }
};