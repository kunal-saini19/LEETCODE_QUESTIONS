class Solution {
public:
    bool isfreqsame(vector<int> &freq1,vector<int> &freq2){
        for(int i=0;i<26;i++ ){
            if(freq1[i] != freq2[i]){
                return false;                
            }
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        if (s1.length() > s2.length()) return false;

        vector<int>freq1(26,0);
        for(int i=0;i<s1.length();i++){
            freq1[s1[i]-'a']++;
        }
        int windowsize=s1.length();
        for(int  i = 0; i+windowsize <=s2.length();i++){
            vector<int>freq2(26,0);
            for(int j=i; j <i+windowsize;j++){
                freq2[s2[j]-'a']++;
            }
            if(isfreqsame(freq1,freq2)){
                return true;
            }
        }
        return false;
    }
};