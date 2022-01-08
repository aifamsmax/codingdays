#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,d=0,u=0;
        cin>>n>>m;
        int arr[m]={0};
        while(n--)
        {
            int a;
            cin>>a;
            arr[a%m]++;
        }
        for(int i=0;i<m;i++)
        {
            if(arr[i]>0)
                d++;
            if(arr[i]==1)
                u++;
        
        }
            cout<<d<<endl;
            cout<<u<<endl;
    }
    return 0;
}