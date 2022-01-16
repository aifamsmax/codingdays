#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool isSubstring(string s1, string s2)
{
    int M = s1.length();
    int N = s2.length();
    for (int i = 0; i <= N - M; i++) {
        int j;
        for (j = 0; j < M; j++)
            if (s2[i + j] != s1[j])
                break;

        if (j == M)
            return true;
    }
    return false;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        string s=to_string(n);
        if(n%21==0 || isSubstring("21", s))
        cout<< "The streak is broken!"<<endl;
        else
            cout<<"The streak lives still in our heart!"<<endl;
    }
    return 0;
}