#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        int n;
        cin>>n;
        vector<int> v;
        int count=0;
        int result;
        for(int i=0;i<n;i++)
        {
            int ele;
            cin>>ele;
            v.push_back(ele);
        }
        if(n==1)
        {
            t--;
            cout<<v[0];
            continue;
        }
        result=__gcd(v[0],v[1]);
        for(int i=2;i<n;i++)
        {
            result=__gcd(result,v[i]);
        }
        
    cout<<result<<" ";
    t--;
    }
    return 0;
}