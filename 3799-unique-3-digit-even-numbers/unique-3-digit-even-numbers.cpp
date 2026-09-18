class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        set<int>ans;
        int n=digits.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int total=0;
                for(int k=0;k<n;k++){
                    if(i!=j && j!=k && i!=k && digits[i] != 0){
                        total=digits[i]*100+digits[j]*10+digits[k];
                        if(total%2==0){
                            ans.insert(total);
                        }
                    }
                }            
            }
        }
       
        return ans.size();
    }
};