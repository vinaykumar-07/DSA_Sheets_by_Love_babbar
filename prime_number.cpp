#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int flag=0;
    for(int i=2;i<n;i++){
        if(n%i==0)flag=1;
    }
    if(flag==0) cout<<n<<" is prime number";
    else cout<<"Number is not prime";
    return 0;
}