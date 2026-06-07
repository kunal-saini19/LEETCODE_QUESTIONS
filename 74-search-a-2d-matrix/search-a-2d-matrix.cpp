class Solution {
public:
    bool solve(vector<vector<int>>& matrix, int str,int target){
        int a=0;
        int b=matrix[0].size()-1;
        while(a<=b){
            int mid=a+(b-a)/2;
            if(target==matrix[str][mid]){
                return true;
            }
            else if(target>matrix[str][mid]){
                a=mid+1;
            }
            else if(target<matrix[str][mid]){
                b=mid-1;
            }   
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int str=0;
        int end=matrix.size()-1;
        int ans=0;
        while(str<=end){
            int mid = str+(end-str)/2;
            if (matrix[mid][0]<=target && target<=matrix[mid][matrix[0].size()-1]){
                return solve(matrix,mid,target);
            }
            else if(matrix[mid][0]>target){
                end=mid-1;
            }
            else if(matrix[mid][matrix[0].size()-1]<target){
                str=mid+1;
            }
        }
        return false;
    }
};