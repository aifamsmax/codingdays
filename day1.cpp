
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        int n,d;
        cin>>n>>d;
        vector <int> v;
        for(int i=0;i<n;i++)
        {
            int ele;
            cin>>ele;
            v.push_back(ele);
        }
        int m[100000];
        int c=0;
        for(int j=d;j<n;j++ )m[c++]=v[j];
        for(int k=0;k<d;k++)m[c++]=v[k];
        for(int i=0;i<n;i++)cout<<m[i]<<" ";
        cout<<endl;
        t--;
    }
}