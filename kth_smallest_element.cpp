
#include<bits/stdc++.h>
using namespace std;


class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int r, int k) {
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
     cin>>n;
     int a[n];
     for(int i=0;i<n;i++) cin>>a[i];
     cin>>k;
     Solution ob;
     cout<<ob.kthSmallest(a,n-1,k)<<endl;    
     
  }
  return 0;
}