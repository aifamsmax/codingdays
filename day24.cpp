class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        bool flag =1;
        int ans=0;
        for(int i=0;i<text.length();i++)
        {
            for(int j=0;j<brokenLetters.length();j++)
            {
                if(text[i]==brokenLetters[j])
                {
                    flag=0;
                }
            }
        if(text[i]==' '||i==text.length()-1)
        {
            if(flag)
                ans++;
            else
                flag=1;
        }
        }
        return ans;
    }
};