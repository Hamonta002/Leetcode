class Solution {
public:
    int dp(int n,vector<int>& v){
        if(n<=1) return 1;
        if(v[n]!=-1) return v[n];
        return v[n]=dp(n-1,v)+dp(n-2,v);
    }
    int climbStairs(int n) {
        vector<int>v(n+1,-1);
        return dp(n,v);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna