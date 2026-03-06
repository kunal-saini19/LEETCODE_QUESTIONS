class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int max_count=0;
        for(int i =0;i<sentences.size();i++){
            int count=1;
            string word=sentences[i];
            for(int i=0;i<word.length();i++){
                if( word[i]==' ')
                count++;
            }
            max_count=max(count,max_count);


        }
        return max_count;
    }
};