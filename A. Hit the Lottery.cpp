#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int countt=0;
  while(n>0){
      if(n>=100){
          n=n-100;
          countt++;
      }
      else if(n>=20){
          n=n-20;
          countt++;
      }
      else if(n>=10){
          n=n-10;
          countt++;
      }
      else if(n>=5){
          n=n-5;
          countt++;
      }
      else if(n>=1){
          n=n-1;
          countt++;
      }
  }
  cout<<countt;
}
