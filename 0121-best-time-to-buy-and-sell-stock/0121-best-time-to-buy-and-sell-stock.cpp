class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mn=INT_MAX,mx=0;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<mn) mn=prices[i];
            else if(prices[i]-mn>mx) mx=prices[i]-mn;
        }
        return mx;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna