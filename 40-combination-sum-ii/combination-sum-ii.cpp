// class Solution {
// public:
class Solution {
public:
    void combination(vector<int>&candidates,int target ,int i,vector <int>&temp,vector <vector<int>>&ans){
        // BASE CASE 
        if(target==0){
            ans.push_back(temp);
            return;
        }
        if(i==candidates.size()) return;

        // MAIN CORE

        if(candidates[i]<=target){
            temp.push_back(candidates[i]);
            combination(candidates,target-candidates[i],i+1,temp,ans);
            temp.pop_back();
        }
         int next = i;
        while (next + 1 < candidates.size() && candidates[next] == candidates[next + 1]) {
            next++;
        }

        combination(candidates,target,next+1,temp,ans);
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int>temp;
        vector<vector<int>>ans;
        sort(candidates.begin(),candidates.end());
        combination(candidates,target,0,temp,ans);
        return ans;
    }
};
//     vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        
//     }
// };