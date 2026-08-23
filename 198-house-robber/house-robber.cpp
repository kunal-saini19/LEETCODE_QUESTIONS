class Solution {
public:
    int solve(int n,vector<int>&dp,vector<int>&nums){
    // BASE CASE
    if(n<0){
        return 0;
    }
    
    // dp case
        if(dp[n]!=-1){
            return dp[n];
        }
        
        int take=nums[n]+solve(n-2,dp,nums);
        int notTake=solve(n-1,dp,nums);

        return dp[n]=max(take,notTake);
    }
    int rob(vector<int>& nums) {
        int n=nums.size()-1;
        vector<int>dp(n+1,-1);
        return solve(n,dp,nums);
    }
};