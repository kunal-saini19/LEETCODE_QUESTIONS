class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
       int left=0;
       double sum=0;
       for(int right=0;right<k;right++){
        sum+=nums[right]; 
       }
       double ans=sum;
       for(int right=k;right<nums.size();right++){
        sum+=nums[right];
        sum-=nums[left];
        left++;
        ans=max(ans,sum);
       }
       return double(ans/k);
       
    }
};