// class Solution {
// public:
//     int solve(vector<int> coins,int sum,int i){
//         if(sum<=0 || i==coins.size()) return 0;
//         int take=1+solve(coins,sum-coins[i],i);
//         int nottake=solve(coins,sum,i+1);
//         return min(take,nottake);
//     }
//     int coinChange(vector<int>& coins, int amount) {
//         int n=coins.size();
//        for(int i =0;i<n;i++){
//         int sum=coins[i];
//        int ans= solve(coins,sum,i);
//        }
//        return ans;
//     }
// };
// class Solution {
// public:

//     int solve(vector<int>& coins, int sum, int i){

//         if(sum == 0) return 0;
//         if(dp[i][sum]);

//         if(sum < 0 || i == coins.size()) return INT_MAX;

//         int take = solve(coins, sum - coins[i], i);
//         if(take != INT_MAX) take = 1 + take;

//         int nottake = solve(coins, sum, i + 1);

//         return min(take, nottake);
//     }

//     int coinChange(vector<int>& coins, int amount) {

//         int ans = solve(coins, amount, 0);

//         if(ans == INT_MAX) return -1;

//         return ans;
//     }
// };
// class Solution {
// public:
//     int coinChange(vector<int>& coins, int amount) {

//         vector<int> dp(amount + 1, INT_MAX);

//         dp[0] = 0;

//         for(int i = 1; i <= amount; i++){

//             for(int j = 0; j < coins.size(); j++){

//                 if(i - coins[j] >= 0 && dp[i - coins[j]] != INT_MAX){
//                     dp[i] = min(dp[i], 1 + dp[i - coins[j]]);
//                 }

//             }
//         }

//         if(dp[amount] == INT_MAX) return -1;

//         return dp[amount];
//     }
// };
class Solution {
public:

    int solve(vector<int>& coins, int sum, int i, vector<vector<int>>& dp){

        if(sum == 0) return 0;

        if(sum < 0 || i == coins.size()) return INT_MAX;

        if(dp[i][sum] != -1) return dp[i][sum];

        int take = solve(coins, sum - coins[i], i, dp);

        if(take != INT_MAX) take = 1 + take;

        int nottake = solve(coins, sum, i + 1, dp);

        return dp[i][sum] = min(take, nottake);
    }

    int coinChange(vector<int>& coins, int amount) {

        int n = coins.size();

        vector<vector<int>> dp(n, vector<int>(amount + 1, -1));

        int ans = solve(coins, amount, 0, dp);

        if(ans == INT_MAX) return -1;

        return ans;
    }
};