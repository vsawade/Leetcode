class Solution {
public:
    bool isArmstrong(int n) {
        int sum = 0;
        int counter = 0;
        int original = n;  
        
        int temp = n;
        while (temp != 0) {
            temp /= 10;
            counter++;  
        }

        temp = original;
        while (temp != 0) {
            int ld = temp % 10;  
            sum += pow(ld, counter);  
            temp /= 10;  
        }

        return sum == original;
    }
};
