class Solution {
public:
    int countCommas(int n) {
        int len=to_string(n).size();

        if(n<4)return 0;
        // int a=(len-1)/3;
        int store=n-1000;
        if(store<0){
            return 0;
        }
        else{
            return store+1;
        }
        return 0;
    }
};