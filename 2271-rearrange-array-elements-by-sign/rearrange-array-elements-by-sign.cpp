class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>ans(nums.size());
        int pos=0;
        int nege=1;
        for(int x:nums){
            if(x>0){
                ans[pos]=x;
                pos+=2;
            }
            else{
                ans[nege]=x;
                nege+=2;
            }
        }
        return ans;
    }
};