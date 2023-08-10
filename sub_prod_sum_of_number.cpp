#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0,product=1,subtract=0,digit;
     while (n>0)
     {
        digit=n%10;
        sum=sum+digit;
       product=product*digit;
       
        n=n/10;
     }
     cout<<sum<<" "<<product<<" "<<abs(sum-product);
     
    return 0;
}