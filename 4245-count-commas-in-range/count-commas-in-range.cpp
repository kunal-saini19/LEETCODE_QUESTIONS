class Solution {
public:
    int countCommas(int n) {
        int len=to_string(n).size();

        if(len<4)return 0;
        // int a=(len-1)/3;
        
        if(n-1000<0){
            return 0;
        }
        else{
            return n-1000+1;
        }
        return 0;
    }
};