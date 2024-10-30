#include <algorithm>
#include<iostream>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
      int arr[4];
      for(int i=0;i<4;i++){
          cin>>arr[i];
      }
      int firstBig=arr[0];
      if(arr[1]>firstBig){
          firstBig=arr[1];
      }
      int secondBig=arr[2];
      if(arr[3]>secondBig){
        secondBig=arr[3];
      }
      sort(arr,arr+4);
      int sortBoss=arr[2];
      if(sortBoss==firstBig||sortBoss==secondBig){
          cout<<"YES"<<endl;
      }
      else{
           cout<<"NO"<<endl;
      }
  }
}
