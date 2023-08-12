
#include<bits/stdc++.h>
using namespace std;


class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        sort(arr,arr+r+1);
        return arr[k-1];
    }
};


int main()
{
  int t;
  cin>>t;
  while (t--)
  {
     int n,k;
     int a[n];
     cin>>n>>k;
     for(int i=0;i<n;i++) cin>>a[i];
     Solution ob;
     cout<<ob.kthSmallest(a,0,n-1,k)<<endl;    
     
  }
  return 0;
}