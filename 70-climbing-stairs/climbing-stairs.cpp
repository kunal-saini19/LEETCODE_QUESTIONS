class Solution {
public:
    int solve(int n,vector<int>&dp){
        if(n==0 || n==1){
            return 1;
        }
        if(dp[n]!=-1){
            return dp[n];
        }
        int take=solve(n-1,dp);
        int notTake=solve(n-2,dp);

        return dp[n]=take+notTake;
    }  
    int climbStairs(int n) {
        vector<int>dp(n+1,-1);
        return solve(n,dp);
        
    }
};