class Solution {
public:
    int trap(vector<int>& nums) {
        int i=0;
        int j=nums.size()-1;
        int imax=INT_MIN;
        int jmax=INT_MIN;
        int ans=0;
        while(i<j){
            imax=max(imax,nums[i]);
            jmax=max(jmax,nums[j]);
            if(imax<=jmax){
                ans+=imax-nums[i];
                i++;
            }
            else if(imax>jmax){
                ans+=(jmax-nums[j]);
                j--;
            }
            else {
                i++;
            }
        }

        return ans;
    }
};