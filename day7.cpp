class Solution {
public:
    bool isPalindrome(int x) {
        string y=to_string(x);
        string z=y;
        reverse(y.begin(),y.end());
        if(z==y)
            return true;
        return false;
    }
};