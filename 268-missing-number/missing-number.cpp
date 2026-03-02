class Solution {
public:
    int missingNumber(vector<int>& nums) {
      int XOR1=0;
      int XOR2=0;
      for(int i;i<nums.size();i++){
        XOR1 ^=i;
        XOR2 ^= nums[i];

      }
      XOR1^=nums.size();
      return XOR2 ^=XOR1;
    }
    
};