#include<iostream>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
      int n;
      cin>>n;
      for(int i=0;i<n/3;i++){
          for(int j=0;j<n/3;j++){
                if(i*1+j*2==n && i-j==1){
                      cout<<i<<" "<<j<<endl;
                }
          }
      }
  }
}
