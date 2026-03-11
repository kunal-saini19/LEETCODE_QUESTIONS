class Solution {
public:
    int largestRectangleArea(vector<int>& height) {
        int n= height.size();
        vector<int>right(n);
        vector<int>left(n);
        stack<int>st;

        // next smallest
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && height[st.top()]>=height[i]){
                st.pop();
            }
            if(st.empty()){
                right[i]=n;
            }
            else{
                right[i]=st.top();
            }
            st.push(i);
        }
        while(!st.empty()){
            st.pop();
        }

        // previous smallest
        for(int i=0;i<n;i++){
            while(!st.empty() && height[st.top()]>=height[i]){
                st.pop();
            }
            if(st.empty()){
                left[i]=-1;
            }
            else{
                left[i]=st.top();

            }
            st.push(i);
        }
        int ans=0;
        for(int i=0 ;i<n;i++){
            int width=right[i]-left[i]-1;
            int high=height[i];
             ans=max(ans,width*high);
        }
        return ans;
    }
};