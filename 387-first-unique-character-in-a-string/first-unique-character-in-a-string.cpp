class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> freq;

    // Count frequency of each character
    for(int i = 0; i < s.size(); i++) {
        freq[s[i]]++;
    }

    // Find first character with frequency 1
    for(int i = 0; i < s.size(); i++) {

        if(freq[s[i]] == 1) {
            return i;
        }
    }

    return -1;


    }
};