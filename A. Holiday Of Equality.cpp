#include<bits/stdc++.h>
using namespace std;
int main(){
          int n;
          cin>>n;
          int arr[n];
          for(int i=0;i<n;i++){
              cin>>arr[i];
          }
          sort(arr,arr+n);
          int sum=0;
          int into=0;
          for(int i=0;i<(n-1);i++){
               sum+=arr[i];
          }
          into=arr[n-1] * (n-1);
           cout<<into-sum<<endl;

}
