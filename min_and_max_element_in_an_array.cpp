// #include<bits\stdc++.h>
// using namespace std;
// #define ll long long

// pair<long long ,long long> std::getMinMax(int a[],int n);
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         ll n;
//         cin >> n;
//         ll a[n];
//         for (int i = 0; i < n; i++)
//             cin >> a[i];
//         pair<ll, ll> p = getMinMax(a, n);
//         cout << p.first << " " << p.second << endl;
//     }
//     return 0;
// }


// pair<long long, long long> getMinMax(long long a[], int n) {
//   pair<long long,long long> p;


// // #Second Approach 
//   // sort(a, a + n);
//   // p.first=a[0];
//   // p.second=a[n-1];
//    return p;
// }

 

#include<bits/stdc++.h>
using namespace std;
#define ll long long


pair <long long,long long> getMinMax(long long a[],int n);
int main()
{
  int t;
  cin>>t;
  while (t--)
  {
     int n;
     cin>>n;
     ll a[n];
     for(int i=0;i<n;i++) cin>>a[i];
     pair<ll,ll>pp=getMinMax(a,n);
     cout<<pp.first<<" "<<pp.second;
  }
  return 0;
}


pair<long long ,long long> getMinMax(long long a[],int n){
  pair<ll,ll> p;
  // sort(a,a+n);
  // p.first=a[0];
  // p.second=a[n-1];
  // #First Approach 
  int max=INT_MIN;
  int min=INT_MAX;
  for(int i=0;i<n;i++)
  {
      if(a[i]>max)
      max=a[i];
      if(a[i]<min)
      min=a[i];
  }
  p.first=min;
  p.second=max;
  return p;
}