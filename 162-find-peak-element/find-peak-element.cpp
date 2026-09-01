class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        // if(nums[0]>nums[n-1]) return 0;
        // if(nums[])
        int i=0;
        int j=nums.size()-1;
        int ans=0;
        while(i<j){
            int mid=i+((j-i)/2);
            if(nums[mid]<nums[mid+1]){
                i=mid+1;
            }
            else{
                j=mid;
            }
        }
        return i;
    }
};