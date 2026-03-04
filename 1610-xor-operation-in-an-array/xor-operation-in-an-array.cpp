class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int> nums;
        int jai=0;

        // for(int i = 0 ; i < n ; i++ ){
        //     nums.push_back(start+2*i);
        // }
        // for(int o:nums){
        //     jai^=o;
        // }
        // return jai;
        for(int i=0; i < n;i++){
            jai^=start+2*i;
        }
        return jai;
    }
};