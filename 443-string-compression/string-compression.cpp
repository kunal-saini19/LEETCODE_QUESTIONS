class Solution {
public:
    int compress(vector<char>& chars) {
        int read=0;
        int write=0;
        while(read<chars.size()){
            char current=chars[read];
            int count=0;
            while(read<chars.size() && chars[read]==current){
                count++;
                read++;
            }
            chars[write++] = current;

            if(count > 1){

                string freq = to_string(count);

                for(char c : freq){
                    chars[write++] = c;
                }
            }
        }

        return write;
    }
};