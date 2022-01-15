// { Driver Code Starts
#include<bits/stdc++.h>
 
using namespace std; 


bool findPair(int arr[], int size, int n);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,n;
        cin>>l>>n;
        int arr[l];
        for(int i=0;i<l;i++)
            cin>>arr[i];
        if(findPair(arr, l, n))
            cout<<1<<endl;
        else cout<<"-1"<<endl;
    }
    
  
    return 0;
}// } Driver Code Ends


bool findPair(int arr[], int size, int n){
    //code
    sort(arr,arr+size);
  for(int i=0;i<size-1;i++)
  {
      int s=i+1;
      int e=size-1;
      int m;
      while(s<=e)
      {
          m=s+(e-s)/2;
          if(abs(arr[m]-arr[i])==n)
          return true;
          else if(abs(arr[m]-arr[i])>n)
          e=m-1;
          else
          s=m+1;
      }
  }
   return false; 
}