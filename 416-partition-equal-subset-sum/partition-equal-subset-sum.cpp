class Solution {
public:
    bool solve(int i,int target,vector<int>&nums,vector<vector<int>>&dp){
        // base case
        if(target==0) return true;
        if(i==0) return nums[0]==target;

        // dp check 
        if(dp[i][target] !=-1){
            return dp[i][target];
        }
        // main core
        bool take=false;
        if(nums[i]<=target){
            take=solve(i-1,target-nums[i],nums,dp);
        }
        bool notTake=solve(i-1,target,nums,dp);

        dp[i][target]=take || notTake;
            return dp[i][target];
        

    }
    bool canPartition(vector<int>& nums) {
       int n =nums.size();
       int sum=0;
        for(int x:nums){
            sum+=x;
        }
        if(sum%2!=0){
            return false;
        }
        int target=sum/2;
        vector<vector<int>>dp(n,vector<int>(target+1,-1));
            return solve(n-1,target,nums,dp);
    }
};