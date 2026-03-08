class Solution {
public:

    // int solve(vector<int>& nums, int i, vector<int>& dp){

    //     if(i >= nums.size()) return 0;

    //     if(dp[i] != -1) return dp[i];

    //     int robCurrent = nums[i] + solve(nums, i+2, dp);
    //     int skipCurrent = solve(nums, i+1, dp);

    //     return dp[i] = max(robCurrent, skipCurrent);
    // }
    int solve(vector<int>&nums,int i,vector<int>&dp){
        if(i<0){
            return 0;
        }if(i==0){
            return nums[0];
        }
        if(dp[i] != -1){
            return dp[i];
        }

        int take=nums[i]+solve(nums,i-2,dp);
        int notTake=INT_MIN;
        if(i>0){
            notTake=solve(nums,i-1,dp);
        }
        dp[i]=max(take,notTake);
        return dp[i];
    }

    int rob(vector<int>& nums) {

        vector<int> dp(nums.size(), -1);
        int n=nums.size();

        return solve(nums, n-1,dp);
    }
};