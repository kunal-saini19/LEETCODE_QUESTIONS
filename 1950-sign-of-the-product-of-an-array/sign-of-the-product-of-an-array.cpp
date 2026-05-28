class Solution {
public:
    double signfunc(double product){
        if(product>0){
            return 1;
        }
        if(product<0){
            return -1;
        }
        else{
            return 0;
        }
    }
    int arraySign(vector<int>& nums) {
        double product=1;
        for(int i=0;i<nums.size();i++){
            product*=nums[i];
        }
        return signfunc(product);
    }
};