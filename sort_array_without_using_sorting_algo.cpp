#include<bits/stdc++.h>
using namespace std;


class Solution{
    public:

    void sort012(int a[], int n)
    {
        int d=0,b=0,c=0;
         for(int i=0;i<n;i++)
         {
             if(a[i]==0) d++;
             else if(a[i]==1) b++;
             else c++;
         }
          int i=0;
        while (d>0) {
            a[i] = 0;
            d--;
            i++;
        }
        while (b>0) {
            a[i] = 1;
            b--;
            i++;
        }
        while(c>0) {
            a[i] = 2;
            c--;
            i++;
        }
    }

};


int main()
{
  int t;
  cin>>t;
  while (t--)
  {
     int n;
     cin>>n;

     int a[n];
     for(int i=0;i<n;i++) cin>>a[i];
      
     Solution ob;
     ob. sort012(a, n);    
     
     for(int i=0;i<n;i++)
     {
        cout<<a[i]<<" ";
     }
     cout<<endl;
  }
  return 0;
}