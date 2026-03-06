class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int> ans(26,0);
        for(char c:sentence){
            ans[c - 'a']++;
        }
        for(int i = 0;i<26;i++){
            if(ans[i]==0){
                return false;
            }
        }
        return true;
    }
};