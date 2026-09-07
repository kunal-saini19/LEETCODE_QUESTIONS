class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<vector<int>>ans;
        
        int j=0;
        int n=matrix.size()-1;
        int m=matrix[0].size()-1;
        while(j<=m){
            vector<int>temp;
            for(int i=n;i>=0;i--){
                temp.push_back(matrix[i][j]);
            }
            ans.push_back(temp);
            j++;
        }
        matrix=ans;      
    }
};