class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int elementsum=0,digitsum=0;
        for(int i = 0 ; i < nums.size() ; i++){
                elementsum += nums[i];
            
            int num =nums[i];
            int a=0;
            while(num>0){
                a=num%10;
                digitsum+=a;
                num/=10;
            }
        }
        return elementsum-digitsum;
    }
};