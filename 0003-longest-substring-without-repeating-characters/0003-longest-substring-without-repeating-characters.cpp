class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int>track(256,-1);
        int l=0,mx=0;
        for (int r=0;r<s.size();r++){
            if(track[s[r]]>=l) l=track[s[r]]+1;
            track[s[r]]=r;
            mx=max(mx,r-l+1);
        }
        return mx;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna