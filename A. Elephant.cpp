#include<iostream>
using namespace std;
int step(int n){
   int countt=0;
   if(n==1){
          countt++;
       }
    else if(n==2){
          countt++;
       }
    else if(n==3){
          countt++;
       }
    else if(n==4){
         countt++;
       }
   while(n>=5){
       n-=5;
       countt++;
       if(n==1){
          countt++;
       }
       else if(n==2){
          countt++;
       }
       else if(n==3){
          countt++;
       }
       else if(n==4){
         countt++;
       }
   }
   cout<<countt;
}
int main(){
  int n;
  cin>>n;
  step(n);
}
