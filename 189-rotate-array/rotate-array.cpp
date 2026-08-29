class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int>temp;
        if (k == 0) return;
        if (nums.empty()) return;
        k = k % nums.size();
        

        int j=nums.size()-k;
        
        for(int i=0;i<k;i++){
        int a=nums.back();
            nums.pop_back();
            temp.push_back(a);
            j++;
        }
        reverse(temp.begin(),temp.end());
        for(int i:nums){
            temp.push_back(i);
            
        }
        nums=temp;
      
    }
};