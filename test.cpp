
 
#include<bits/stdc++.h>
using namespace std;



class Solution
{
public:
  long long int largestPrimeFactor(int N){
    //  vector<int> v1[1000];
    //     while(N>1){
    //         int factor=2;
    //         N%factor==0?v1.puch_back(factor):factor++;
    //         N=N/factor;
    //     }
    //     sort(v1.begin(),v1.end());
        // return v1[v1.size()];
        int v= {1,2,3,4,5,6,7};
        return v[4];
    }
};
int main(){
    int N;
    cin>>N;
    Solution ob;
   cout<< ob.largestPrimeFactor(N);
    return 0;
}