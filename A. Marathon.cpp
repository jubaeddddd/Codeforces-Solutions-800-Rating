#include<iostream>
#include<algorithm>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
       int arr[4];
    for(int i=0;i<4;i++){
     cin>>arr[i];
  }
   int target=arr[0];
   sort(arr,arr+4);
   if(arr[0]==target){
       cout<<"3"<<endl;
   }
   else if(arr[1]==target){
      cout<<"2"<<endl;
   }
   else if(arr[2]==target){
       cout<<"1"<<endl;
   }
   else{
      cout<<"0"<<endl;
   }
  }
}
