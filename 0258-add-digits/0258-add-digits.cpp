class Solution {
public:
    int addDigits(int num) {
        int sum =0;
        while(num ){
            int rem = num %10;
            sum += rem;
            num /= 10;
            
        }
         if(sum >= 10) {
            return addDigits(sum);
        }
        return sum;
    }
};