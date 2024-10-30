#include<iostream>
using namespace std;
int countTimes(int a,int b){
    int countt=0;
  if(a<b){
     int countt=0;
     while(a<=b){
          a*=3;
          b*=2;
          countt++;
     }
     return countt;
  }
  else{
      return 1;
  }
}
int main(){
  int a,b;
  cin>>a;
  cin>>b;
  cout<<countTimes(a,b);
}
