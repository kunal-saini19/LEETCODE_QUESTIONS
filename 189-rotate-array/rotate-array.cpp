class Solution {
public:

    void  reverse(int i,int j,vector<int>&nums){
        if(i<0||j<0) return;
        while(i<j){
           swap(nums[i],nums[j]);
           i++;
           j--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        if(k==0 || n==0) return ;
        k=k%n;
        reverse(0, n-k-1, nums);
        reverse(n-k, n-1, nums);
        reverse(0, n-1, nums);
    }
};