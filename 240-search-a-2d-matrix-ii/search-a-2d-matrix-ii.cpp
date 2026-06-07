class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r=0,c=matrix[0].size()-1;
        while(r<matrix.size() && c<matrix[0].size()){
            if(target==matrix[r][c]){
                return true;
            }
            else if(target>matrix[r][c]){
                r++;
            }
            else if(target<matrix[r][c]){
                c--;
            }
        }
        return false;
    }
};