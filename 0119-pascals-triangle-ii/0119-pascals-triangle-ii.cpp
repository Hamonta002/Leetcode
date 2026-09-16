class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int>v(rowIndex+1,1);
        for(int i=1;i<rowIndex;i++){
            for(int j=i;j>0;j--){
                v[j]+=v[j-1];
            }
        }
        return v;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna