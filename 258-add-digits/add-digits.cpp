class Solution {
public:
   
       
          
        
    
       int addDigits(int num){
        if(num<10)return num;
        while(num>=10){
          int sum=0;
        while(num>0){
           
            // if(num%10 !=0){
                int a=num%10;
                sum+=a;
                num=num/10;
            // }
                
            }
             num=sum;
        }
            return num ;
       
       }

    //     int addDigits(int &sum) {

         
    //         if(sum<10){
    //             man(sum);
    //     }
    //     return sum ;
    // }
    
    
};