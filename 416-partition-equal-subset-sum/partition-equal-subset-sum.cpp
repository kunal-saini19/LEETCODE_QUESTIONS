class Solution {
public:
    bool solve(int i,int sum,int currentsum,vector<int>&nums,vector<vector<int>>&dp){
        // base case
        
        if(i>=nums.size()-1){
            if(sum/2==currentsum){
                return true;
            }
            else{
                return false;
            }
        }
        if(dp[i][currentsum]!=-1){
            return dp[i][currentsum];
        }
        int take=solve(i+1,sum,currentsum+nums[i],nums,dp);
        int notTake=solve(i+1,sum,currentsum,nums,dp);

         return dp[i][currentsum]=take||notTake;
    }
    bool canPartition(vector<int>& nums) {
        int n=nums.size();
        if(n==1)return false;
        int sum=0;
        for(int x:nums){
            sum+=x;
        }
        if(sum%2!=0){
            return false;
        }

        vector<vector<int>>dp(n,vector<int>(sum+1,-1));
        return solve(0,sum,0,nums,dp);
    }
};