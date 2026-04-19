class Solution {
public:
    int solve(int i,int target,vector<int>&coins,vector<vector<int>>&dp){
        if(target==0){
            return 0;
        }
        if(i==coins.size()) return INT_MAX;
        if(dp[i][target] !=-1){
            return dp[i][target];
        }
        int take=INT_MAX;
        
        if(coins[i]<=target){
            int res=solve(i,target-coins[i],coins,dp);
            if(res !=INT_MAX){
                take=1+res;
            }
        }
        int notTake=solve(i+1,target,coins,dp);
        return dp[i][target]=min(take,notTake);
    }
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<vector<int>>dp(n,vector<int>(amount+1,-1));
        int ans=solve(0,amount,coins,dp);
        return (ans==INT_MAX)?-1:ans;
    }
};