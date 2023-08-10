#include<bits\stdc++.h>
using namespace std;
int main(){
    
    int arr[] = {1, 2, 3,4,5,8};
    int N=sizeof(arr)/sizeof(arr[0]);
    int i=0;
    int temp=0;
   while (i<N/2)
   {
        temp=arr[i];
        arr[i]=arr[N-i-1];
        arr[N-i-1]=temp;
        i++;
   }
   for(int i=0;i<N;i++)
   { cout<<arr[i]<<","; 
    }
    return 0;
}