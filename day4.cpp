#include<bits/stdc++.h>
using namespace std;
string solve (int n) {
   if(n==1 || n==2 || n==3)
   return "No";
   for(int i=2;i<=sqrt(n);i++)
   if(n%i==0)
   return "Yes";
    return "No";
}
int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for(int t_i=0; t_i<T; t_i++)
    {
        int N;
        cin >> N;

        string out_;
        out_ = solve(N);
        cout << out_;
        cout << "\n";
    }
}