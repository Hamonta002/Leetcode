#include<string>
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false ;
        }
        string str = to_string(x);
        int i =0 , j=str.length()-1 ;
        while(i<j){
            if(str[i]!=str[j]){
                return false ;
            };
            i++;
            j--;
        } ;
        return true ;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna