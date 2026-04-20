class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five=0,ten=0;
        for(int i=0;i<bills.size();i++){
            if(bills[i]==5){
                five++;
            }
            if(bills[i]==10){
                if(five>0){
                    five--;
                    ten++;
                }
                else{
                    return false;
                }
            }
            if(bills[i]==20){
                if(five>0 && ten>0){
                    
                    five--;
                    ten--;
                    }

                    else if(five>=3){
                        five=five-3;
                    }
                
                else{
                    return false;
                }
            }
        }
        return true;
    }
};

//  else if((totalearning-5+bills[i])<0){
                
//                 counter=false;
//                 break;
                
//             }
//             else if
//             ((totalearning -5 +bills[i])>=0){
//                 totalearning=totalearning+5 -bills[i];
//             }
//  bool counter=true;
//         sort(bills.begin(),bills.end());
//         int totalearning=0;
//         for(int i=0;i<bills.size();i++){
//             if(bills[i]==5){
//                 totalearning+=bills[i];
//             }
//            if(bills[i]==10){
//             if(totalearning>=5){
//                 totalearning=totalearning+bills[i]-5;
//             }
//             else{
//                 return false;
//             }
//            }
//            if(bills[i]==20){
//             if(totalearning>=15){
//                 totalearning=totalearning+bills[i]-15;
//             }else{

//             return false;
//             }
//            }
//         }
//         return counter;