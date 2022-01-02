#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    long long minTime(long long a[], long long b[], long long n)
    {
        // Your code goes here 
        long long int c=0;
        long long int d=0;
        for(int i=0;i<n;i++)
        c+=(i&1)?a[i]:b[i];
        for(int i=0;i<n;i++)
        d+=(i&1)?b[i]:a[i];
        return min(c,d);
    }
};
int main() {
    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin >> n;
        long long a[n], b[n];
        for(long long i=0;i<n;i++)
            cin >> a[i];
        for(long long i=0;i<n;i++)
            cin >> b[i];
        Solution ob;
        cout << ob.minTime(a, b, n) << endl;
    }
    return 0;
}
