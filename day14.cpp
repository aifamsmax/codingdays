class Solution {
public:
    int mySqrt(int x) {
        long long s=0;
        long long e=x;
        long long m=s+((e-s)>>1);
        int ans;
        while(s<=e)
        {
            if(m*m<=x)
            {   
                s=m+1;
                ans=m;
            }
            else
                e=m-1;
           m=s+((e-s)>>1);
        }
        return ans;
    }
};