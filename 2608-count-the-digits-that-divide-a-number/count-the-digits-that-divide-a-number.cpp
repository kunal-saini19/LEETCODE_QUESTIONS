class Solution {
public:
    int countDigits(int num) {
        int count=0;
        int newnum=num;
        while(num>0){
        
           int a = num%10;
           if(newnum % a == 0){
            count++;
           }
           num/=10;
        }
         return count;

    }
};