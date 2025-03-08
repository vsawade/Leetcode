class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        int original = x;
        long ans = 0;
        while(x!=0){
            int digit = x%10;
            
            ans = ans *10 + digit;
            x= x/10; 
        }  
        
        
        if(ans == original){
            return true;
        }
        else{
            return false;
        }

    }
};
