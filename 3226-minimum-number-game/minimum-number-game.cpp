class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int>ans;
        if(nums.size()!=0){
            while(nums.size()>0){
                int a=*min_element(nums.begin(),nums.end());
                int alice=a;
                auto it =find(nums.begin(),nums.end(),a);
                if(it != nums.end()){
                    nums.erase(it);
                }
                int b=*min_element(nums.begin(),nums.end());
                int bob=b;
                auto t =find(nums.begin(),nums.end(),b);
                if(t != nums.end()){
                    nums.erase(t);
                }
                ans.push_back(bob);
                ans.push_back(alice);
            }
        }
        return ans;
    }
};