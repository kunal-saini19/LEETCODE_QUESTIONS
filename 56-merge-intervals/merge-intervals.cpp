class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<pair<int,int>>temp;

        for(int i=0;i<intervals.size();i++){
            temp.push_back({intervals[i][0],intervals[i][1]});
        }
        sort(temp.begin(),temp.end());
        vector<vector<int>>ans;

        int start=temp[0].first;
        int end=temp[0].second;

        for(int i=1;i<temp.size();i++){
            if(end>=temp[i].first){
                end=max(end,temp[i].second);
                continue;
            }
            else{
                ans.push_back({start,end});
                start=temp[i].first;
                end=temp[i].second;
            }
        }
        ans.push_back({start,end});
        return ans;
    }
};