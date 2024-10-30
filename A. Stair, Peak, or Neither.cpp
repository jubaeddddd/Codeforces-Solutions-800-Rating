#include<iostream>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
     int a,b,c;
     cin>>a;
     cin>>b;
     cin>>c;
     if(b>a && c>b){
          cout<<"STAIR"<<endl;
     }
     else if(b>a && b>c){
         cout<<"PEAK"<<endl;
     }
     else{
          cout<<"NONE"<<endl;
     }
   }
}
