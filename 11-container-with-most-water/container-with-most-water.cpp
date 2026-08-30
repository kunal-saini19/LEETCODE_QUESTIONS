class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;
        int j=height.size()-1;
        int ans=INT_MIN;
        while(i<j){
            int width=j-i;
            int h=min(height[j],height[i]);
            int area=width*h;
            ans=max(ans,area);
            height[j]<=height[i]?j--:i++;
        }
        return ans;
    }
};