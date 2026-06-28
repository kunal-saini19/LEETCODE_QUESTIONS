class Solution {
public:
    int countElements(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        for(int i=0;i<n;i++){
            int greater=0;
            int smaller=0;
            for(int j=0;j<n;j++){
                if(nums[i]>nums[j]){
                    greater++;
                }
                if(nums[i]<nums[j]){
                    smaller++;
                }
            }
            if(greater>0 && smaller >0){
                count++;
            }
        }
        return count;
    }
};