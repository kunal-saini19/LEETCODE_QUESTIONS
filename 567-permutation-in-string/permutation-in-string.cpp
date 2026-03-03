
   class Solution {
public:

    bool isfresame(vector<int>& freq1, vector<int>& freq2){
        for(int i = 0; i < 26; i++){
            if(freq1[i] != freq2[i]){
                return false;
            }
        }
        return true;
    }

    bool checkInclusion(string s1, string s2) {

        if (s1.length() > s2.length()) return false;

        vector<int> freq1(26, 0);
        for(char a : s1){
            freq1[a - 'a']++;
        }

        int windowSize = s1.length();

        // sliding window
        for(int i = 0; i + windowSize <= s2.length(); i++){

            vector<int> freq2(26, 0);

            // build window frequency correctly
            for(int j = i; j < i + windowSize; j++){
                freq2[s2[j] - 'a']++;
            }

            if(isfresame(freq1, freq2)){
                return true;
            }
        }

        return false;
    }
};
