class Solution {
public:
    int romanToInt(string s) {
        map<char,int>mp={{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        int sum=0,i=0;
        for(i=0;i<s.size()-1;i++){
            if(mp[s[i]]<mp[s[i+1]]){ sum+=mp[s[i+1]]-mp[s[i]]; i+=1; }
            else sum+=mp[s[i]];

            //cout<< sum<<endl;
        }
        if(i<s.size()) sum+=mp[s[s.size()-1]];
        return sum;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna