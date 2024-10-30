#include<iostream>
using namespace std;
int main(){
   int k,n,w;
   cin>>k;
   cin>>n;
   cin>>w;
   int sum=0;
   for(int i=1;i<=w;i++){
       sum=sum+i*k;
   }
   if(sum<n){
      cout<<"0";
   }
   else{
      int output=sum-n;
       cout<<output;
   }
}
