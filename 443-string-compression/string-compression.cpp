class Solution {
public:
    int compress(vector<char>& chars) {
        int index=0;
        for(int i =0 ;i<chars.size();i++){
            char ch= chars[i];
            int count=0;
            while(i<chars.size() && ch==chars[i]){
                count++;i++;
            }
            if(count==1){
                chars[index++]=ch;
            }
            else{
                chars[index++]=ch;
                string ct=to_string(count);
                for(char c:ct){
                    chars[index++]=c;
                }
                
            }
            i--;
        }
        chars.resize(index);
        return chars.size();
    }
};