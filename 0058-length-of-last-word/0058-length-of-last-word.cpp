class Solution {
public:
    int lengthOfLastWord(string s) {
        int cnt=0,ind=s.size()-1;
        while(s[ind]==' ') ind--;
        while(ind>=0){ 
            if(s[ind]!=' ') cnt++;
            else break;
            ind--;
        }
        return cnt;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna