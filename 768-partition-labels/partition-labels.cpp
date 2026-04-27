class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int>store(26);
        for(int i=0;i<s.size();i++){
            store[s[i]-'a']=i;
        }
        vector <int >ans;
        int start =0,maxEnd=0;
        for(int i =0;i<s.size();i++){
            maxEnd=max(maxEnd,store[s[i]-'a']);
        
            if(i==maxEnd){
                ans.push_back(i-start+1);
                start=i+1;
            }
        }
        return ans;
    }  
};