class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
      int total=0;
      int maxsum=nums[0],currmax=nums[0];
      int minsum=nums[0],currmin=nums[0];
      for(int i=0;i<nums.size();i++){
        total+=nums[i];
        if(i>0){
            currmax=max(nums[i],currmax+nums[i]);
            maxsum=max(maxsum,currmax);
            
            currmin=min(nums[i],currmin+nums[i]);
            minsum=min(currmin,minsum);
        }
      }
        if(maxsum<0){
            return maxsum;
        }
        return max(maxsum,total-minsum);
    }
};