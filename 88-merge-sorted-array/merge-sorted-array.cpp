class Solution {
public:
    void merging (vector<int>&nums,int start,int mid,int end){
        int i=start;
        int j=mid+1;
        vector<int>temp;
        while(i<=mid && j<=end){
            if(nums[i]<=nums[j]){
                temp.push_back(nums[i]);
                i++;
            }
            else{
                temp.push_back(nums[j]);
                j++;
            }
        }
        while(i<=mid){
            temp.push_back(nums[i]);
            i++;
        }
        while(j<=end){
            temp.push_back(nums[j]);
            j++;
        }
        for (int i = start; i <= end; i++) {
            nums[i] = temp[i - start];
        }
    }
    void mergesort(vector<int>&nums,int start,int end){
        // int start=0;
        // int end=nums.size()-1;
        if(start>=end) return ;
        int mid=start+(end-start)/2;
        mergesort(nums,start,mid);
        mergesort(nums,mid+1,end);
        merging(nums,start,mid,end);
        
    }
    // void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    //     for(int i=0;i<n;i++){
    //         nums1.push_back(nums2[i]);
           
    //     }
    //     vector<int>h;
    //     int k=nums1.size();
    //     mergesort(nums1,0,k-1);
    //     for(int i=0;i<k;i++){
    //         if(nums1[i] !=0){
    //             h.push_back(nums1[i]);
    //         }
    //     }
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // FIX 1: Overwrite the placeholder zeros in nums1 with nums2 elements
        // nums1 already has size m + n. Don't use push_back.
        for (int i = 0; i < n; i++) {
            nums1[m + i] = nums2[i];
        }

        // FIX 2: Sort the entire combined array (size is m + n)
        mergesort(nums1, 0, m + n - 1);
      

    }
};