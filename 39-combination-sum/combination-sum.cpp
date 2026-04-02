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
            combination(candidates,target-candidates[i],i,temp,ans);
            temp.pop_back();
        }
        combination(candidates,target,i+1,temp,ans);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>temp;
        vector<vector<int>>ans;
        combination(candidates,target,0,temp,ans);
        return ans;
    }
};