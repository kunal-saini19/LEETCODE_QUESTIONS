class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {

        vector<vector<int>> ans;
        int n = nums.size();

        sort(nums.begin(), nums.end());

        for(int i = 0; i < n-3; i++){

            if(i > 0 && nums[i] == nums[i-1]) continue;

            for(int j = i+1; j < n-2; j++){

                if(j > i+1 && nums[j] == nums[j-1]) continue;

                int left = j+1;
                int right = n-1;

                while(left < right){

                    long long sum = (long long)nums[i] + nums[j] + nums[left] + nums[right];

                    if(sum == target){

                        ans.push_back({nums[i], nums[j], nums[left], nums[right]});

                        left++;
                        right--;

                        while(left < right && nums[left] == nums[left-1]) left++;
                        while(left < right && nums[right] == nums[right+1]) right--;
                    }

                    else if(sum < target) left++;

                    else right--;
                }
            }
        }

        return ans;
    }
};
// class Solution {
// public:
//     vector<vector<int>> fourSum(vector<int>& nums, int target) {
//         vector<vector<int>>ans;
//         int n=nums.size();
//         // int first=0;
       
       
//         sort(nums.begin(),nums.end());
//         for(int i=0;i<n;i++){
//              if(nums[i]==nums[i]) continue;
//               for(int j = i+1; j < n-2; j++){

//                 if(j > i+1 && nums[j] == nums[j-1]) continue;
//                  int str=i+1;
              
//                  int secondlast=j-1;

//         while(i<i){
           
//             int sum=nums[i]+nums[str]+nums[j]]+nums[secondlast];
//             if(sum==target){
//                 ans.push_back({nums[i],nums[str],nums[j],nums[secondlast]});
//                 str++;
//                 last--;
//                 // secondlast--;
//                 if(nums[str]==nums[str-1]) str++;
//                 if(nums[secondlast]==nums[secondlast-1]) secondlast--;
                
//             }
//             if(sum>target){
//                 secondlast--;
//             }else{
//                 first++;
//             }

//         }
//               }
//         }
//         return ans;

//     }
// };
   