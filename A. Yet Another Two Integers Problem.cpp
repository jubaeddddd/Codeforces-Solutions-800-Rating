#include<iostream>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
        int a,b;
        cin>>a;
        cin>>b;
        cout<<(abs(a-b)+9)/10<<endl;
        cout<<endl;
   }
}
