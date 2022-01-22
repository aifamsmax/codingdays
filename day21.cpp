class Solution {
public:
     bool check(vector<int>& piles,int m,int h)
     {
        int count=0;
         for(int i=0;i<piles.size();i++)
         {
             count+=ceil(1.0*piles[i]/m);
         }
         if(count<=h)
             return true;
         return false;
     }
    int minEatingSpeed(vector<int>& piles, int h) {
        int  s=1;
        int e=1000000000;
        int m=s+(e-s)/2;
        while(s<=e)
        {
            if(check(piles,m,h))
                e=m-1;
            else
                s=m+1;
            m=s+(e-s)/2;
        }
        return s;
    }
};