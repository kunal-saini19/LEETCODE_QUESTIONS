class Solution {
public:
    long long countCommas(long long n) {
    long long ans=0;
        if(n>999) ans+=(n-999);
        // if(n>100000) ans+=(n-999);
        if(n>999999) ans+=(n-999999);
        if(n>999999999LL) ans+=(n-999999999LL);
        if(n>999999999999LL) ans+=(n-999999999999LL);
        if (n > 999999999999999LL)    ans += (n - 999999999999999LL);
        return ans;
    }
};