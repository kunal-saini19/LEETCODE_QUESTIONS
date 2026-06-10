class Solution {
public:
    int maxVowels(string s, int k) {

        int left = 0;
        int count = 0;

        for(int right = 0; right < k; right++) {

            if(tolower(s[right]) == 'a' ||
               tolower(s[right]) == 'e' ||
               tolower(s[right]) == 'i' ||
               tolower(s[right]) == 'o' ||
               tolower(s[right]) == 'u') {

                count++;
            }
        }

        int ans = count;

        for(int right = k; right < s.size(); right++) {

            // Add right character
            if(tolower(s[right]) == 'a' ||
               tolower(s[right]) == 'e' ||
               tolower(s[right]) == 'i' ||
               tolower(s[right]) == 'o' ||
               tolower(s[right]) == 'u') {

                count++;
            }

            // Remove left character
            if(tolower(s[left]) == 'a' ||
               tolower(s[left]) == 'e' ||
               tolower(s[left]) == 'i' ||
               tolower(s[left]) == 'o' ||
               tolower(s[left]) == 'u') {

                count--;
            }

            ans = max(ans, count);

            left++;
        }

        return ans;
    }
};