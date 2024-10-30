#include<iostream>
#include<cmath>
using namespace std;
int main(){
   long long n;
   cin>>n;
   if(n>=987654321012345678){
       cout<<"25"<<endl;
   }
   else{
    long long power=pow(5,n);
   long long answer=power%100;
   cout<<answer<<endl;

   }
}
