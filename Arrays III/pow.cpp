// 50. Pow(x, n)
// Implement pow(x, n), which calculates x raised to the power n (i.e., xn).

class Solution {
public:
    double myPow(double x, int n) {
        if(n!=0)
        return myPow(x,n-1)*x;
        else 
        return 1;
    }
};