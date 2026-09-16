class Solution {
public:
    bool isPalindrome(string s) {
        if(s.size()==0) return true;
        string st;
        for (int i=0;i<s.size();i++){
            s[i]=tolower(s[i]);
            if((s[i]>='a' && s[i]<='z') ||(s[i]>='0' && s[i]<='9')) st+=s[i];
        }
        for (int i=0;i<st.size();i++){
            if (st[i]!=st[st.size()-i-1]) return false;
        }
        return true;
    } 
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna