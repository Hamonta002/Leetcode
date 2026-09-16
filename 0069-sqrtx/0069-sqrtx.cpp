class Solution {
public:
    int mySqrt(int x) {
        if(x==0) return 0;
        long long n=x;
        while(n*n>x){
            n=(n+x/n)/2;
        }
        return n;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna