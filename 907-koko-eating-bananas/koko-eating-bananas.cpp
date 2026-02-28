class Solution {
public:
    bool cutieeKOKO(vector<int> &piles,int target,int maxallowedtime ){
        long long  a=0;
        for(int banana:piles){
            a+=(banana+target-1)/target;
        }
      return a<=maxallowedtime;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int start =1;
        int end = *max_element(piles.begin(),piles.end());
        // for(int a:piles){
        //     end+=a;
        // }
        
        int ans=0;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(cutieeKOKO(piles,mid,h)){
                ans=mid;
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return ans;
    }
};
// class Solution {
// public:

//     bool canFinish(vector<int>& piles, int speed, int h) {
//         long long time = 0;

//         for (int bananas : piles) {
//             time += (bananas + speed - 1) / speed; // ceil division
//         }

//         return time <= h;
//     }

//     int minEatingSpeed(vector<int>& piles, int h) {
//         int start = 1;
//         int end = *max_element(piles.begin(), piles.end());
//         int ans = end;

//         while (start <= end) {
//             int mid = start + (end - start) / 2;

//             if (canFinish(piles, mid, h)) {
//                 ans = mid;
//                 end = mid - 1;   // try smaller speed
//             } else {
//                 start = mid + 1; // need faster speed
//             }
//         }

//         return ans;
//     }
// };