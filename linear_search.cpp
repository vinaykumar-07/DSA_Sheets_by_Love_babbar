 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {
    int a[100]={1,2,3,4,5,6,7,8,9,11,23,34,55,66,32};
    int key=11;
    for(int i=0;i<100;i++){
         if(a[i]==key)
        { cout<<"Element is present in the array at position "<<i;
        break;
        }
    }
    
   return 0;

 }