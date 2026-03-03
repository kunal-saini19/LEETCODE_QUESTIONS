class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
       
        sort(nums.begin(),nums.end());

        for(int i=0;i<nums.size()-1;i++){
            int str=i+1;
            int end=nums.size()-1;
             if (i > 0 && nums[i] == nums[i - 1]) continue;

            while(str < end){
                int sum=nums[i]+nums[str]+nums[end];
                // int index=0;
                if(sum==0){
                    ans.push_back({nums[i],nums[str],nums[end]});
                    // nums.push_back(nums[index][str]);
                    // nums.push_back(nums[index][end]);
                    

                    str++;
                    end--;
                    while (str < end && nums[str] == nums[str - 1])
                        str++;

                    while (str < end && nums[end] == nums[end + 1])
                        end--;
                    
                }
                else if(sum > 0){
                    end--;
                    
                }else{
                    str++;
                }
            }
        }return ans;
    }
};