#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int num=0;
   while (n>0)
   {
        int digit=n%10;
        num=num*10+digit;
        n=n/10;
   }
   cout<<num;

    
    return 0;
}