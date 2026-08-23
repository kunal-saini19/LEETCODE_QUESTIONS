class Solution {
public:
    int solve(int i,int n,vector<int>&nums,vector<int>&dp){
        // base case
       if(i>n){
            return 0;
       }
        if(dp[i]!=-1){
            return dp[i];
        }
        int take=nums[i]+solve(i+2,n,nums,dp);
        int notTake=solve(i+1,n,nums,dp);

        return dp[i]=max(take,notTake);

    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1){
            return nums[0];
        }
        vector<int>dp1(n+1,-1);
        int first=solve(0,n-2,nums,dp1);

        vector<int>dp2(n+1,-1);
        int second=solve(1,n-1,nums,dp2);
        return max(first,second);
    }
};