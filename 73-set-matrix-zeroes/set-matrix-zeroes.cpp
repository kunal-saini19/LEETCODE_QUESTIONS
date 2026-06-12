class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<int>row(n+1,0);
        vector<int>coloum(m+1,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    row[i]=2;
                    coloum[j]=2;
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(row[i]==2 ||coloum[j]==2){
                    matrix[i][j]=0;
                }
            }
        }
    }
};