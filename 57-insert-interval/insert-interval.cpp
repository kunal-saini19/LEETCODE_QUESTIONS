class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>>ans;
        int i=0;
        while(i<intervals.size() && intervals[i][1]<newInterval[0]){
            ans.push_back({intervals[i][0],intervals[i][1]});
            i++;
        }
        if(i==intervals.size()){
            ans.push_back(newInterval);
            return ans;
        }

        int start,end;
        
            if(intervals[i][0]>newInterval[1]){
                ans.push_back(newInterval);
                start=intervals[i][0];
                end=intervals[i][1];
            }
            else{
            start=min(newInterval[0],intervals[i][0]);
            end=max(newInterval[1],intervals[i][1]);
            }
        

        for(i++;i<intervals.size();i++){
            if(end>=intervals[i][0]){
                end=max(end,intervals[i][1]);
                
            }
            else{
                ans.push_back({start,end});
                start=intervals[i][0];
                end=intervals[i][1];
                
            }
        }
    ans.push_back({start,end});
    return ans;
    }
};