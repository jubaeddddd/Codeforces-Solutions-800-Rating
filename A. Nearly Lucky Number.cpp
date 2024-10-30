#include<iostream>
using namespace std;
int main(){
  long long  n;
  int countt=0;
  cin>>n;
  while(n!=0){
      if(n%10==4 || n%10==7){
        countt++;
      }
      n=n/10;
  }
  if(countt==4 || countt==7){
      cout<<"YES";
  }
  else{
    cout<<"NO";
  }
}
