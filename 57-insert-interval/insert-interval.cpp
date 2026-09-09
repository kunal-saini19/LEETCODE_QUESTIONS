class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>>ans;
        vector<pair<int,int>>temp;
        for(int i=0;i<intervals.size();i++){
            temp.push_back({intervals[i][0],intervals[i][1]});
        }
        temp.push_back({newInterval[0],newInterval[1]});

        sort(temp.begin(),temp.end());

        int start=temp[0].first;
        int end =temp[0].second;
        for(int i=1;i<temp.size();i++){
            if(end>=temp[i].first){
                end=max(end,temp[i].second);
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