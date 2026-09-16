class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> v(digits.size()+1);
        if(digits[digits.size()-1]<9) digits[digits.size()-1]+=1;
        else{
            int cnt=0;
            for(int i=digits.size()-1;i>=0;i--){
                if(digits[i]==9){
                    cnt++;
                    digits[i]=0;
                }
                else {
                    digits[i]+=1;
                    break;
                }
            }

            if(cnt==digits.size()){
                v[0]=1;
                for(int i=1;i<digits.size();i++) v[i]=digits[i-1];
                return v;
            }
        }
        return digits;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna