class Solution {
public:
bool isAlphanumeric(char c){
    if(tolower(c)>='a' && tolower(c)<='z' || c>='0' &&c<='9'){
        return true;
    }
    return false;
}
    bool isPalindrome(string s) {
        int str=0,end=s.length()-1;
        while(str<end){
            if(!isAlphanumeric(s[str])){
                str++;
                continue;
            }
            if(!isAlphanumeric(s[end])){
                end--;
                continue;
            }
            if(tolower(s[str]) != tolower(s[end])){
                return false;
            }
            str++;
            end--;
        }
        return true;
    }
};