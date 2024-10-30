#include<iostream>
using namespace std;
int main(){
  int n,h;
  cin>>n;
  cin>>h;
  int arr[n];
  for(int i=0;i<n;i++){
      cin>>arr[i];
  }
  int countt=0;
  for(int i=0;i<n;i++){
      if(arr[i]<=h){
          countt=countt+1;
      }
      if(arr[i]>h){
          countt=countt+2;
      }
  }
  cout<<countt<<endl;
}
