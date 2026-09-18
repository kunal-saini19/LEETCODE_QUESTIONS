class Solution {
public:
    string minWindow(string s, string t) {
        vector<int>need(128,0);
        vector<int>window(128,0);

        for(char c:t){
            need[c]++;
        }
        
        int start=0;
        int left=0;
        int minlen=INT_MAX;
        int count=0;

        for(int right=0;right<s.size();right++){
            window[s[right]]++;
            if(window[s[right]]<=need[s[right]]){
                count++;
            }
            while(count==t.size()){
                if(right-left+1 < minlen){
                    minlen=right-left+1;
                    start=left;
                }
                window[s[left]]--;

                if(window[s[left]]< need[s[left]]){
                    count--;
                }
                left++;
            }
        }
        if(minlen==INT_MAX){
            return "";
        }
        return s.substr(start,minlen);
    }
};