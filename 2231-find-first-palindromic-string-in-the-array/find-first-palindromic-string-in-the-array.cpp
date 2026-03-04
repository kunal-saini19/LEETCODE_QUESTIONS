class Solution {
public:
    string firstPalindrome(vector<string>& words) {

        for(int i = 0; i < words.size(); i++){

            string s = "";

            for(char ch : words[i]){
                s += ch;
            }

            reverse(s.begin(), s.end());

            if(s == words[i]){
                return words[i];
            }
        }

        return "";
    }
};