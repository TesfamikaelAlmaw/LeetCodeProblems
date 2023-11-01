class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return 0;
        }
        long number=0,k=x;
        while(x){
            
            number=(number*10)+x%10;
            x/=10;
        }
    
            if(number==k){
            
          return true;  
            }
        
       else
           return false ;
        
    
       
    }
};