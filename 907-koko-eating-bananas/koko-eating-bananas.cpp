class Solution {
public:
    bool isvalid(vector<int>&piles,int maximumspeed,int h){
        // int banana=0;
        long long speed=0;;
        for(int i=0;i<piles.size();i++){
            speed+=(maximumspeed+piles[i]-1)/maximumspeed;
        }
        return speed<=h;
    }
        
        int minEatingSpeed(vector<int>& piles, int h) {
            if(h<piles.size()-1) return -1;
            int start=1;
            int ans=0;
            int last=*max_element(piles.begin(),piles.end());
            while(start<=last){
                int mid=start+(last-start)/2;
                if(isvalid(piles,mid,h)){
                    ans=mid;
                    last=mid-1;
                }
                else{
                    start=mid+1;
                }
            }
            return ans;
    }
};