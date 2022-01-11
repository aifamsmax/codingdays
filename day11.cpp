class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char t) {
        int s=0;
        int e=letters.size()-1;
        int m=s+(e-s)/2;
        int ans=letters[0];
        while(s<=e)
        {
            if((letters[m]-'a')>((t-'a')))
            {
                if((letters[m]-'a')==(t-'a'+1))
                    return letters[m];
                ans=letters[m];
                e=m-1;
            }
            else
                s=m+1;
            m=s+(e-s)/2;
        }
        return ans;
    }
};