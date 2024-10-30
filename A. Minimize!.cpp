#include<iostream>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
       int a,b;
       cin>>a;
       cin>>b;
       for(int i=a+1;i<b;i++){
           if(i<=a && i<=b){
             cout<<i;
             break;
           }
       }
   }
}
