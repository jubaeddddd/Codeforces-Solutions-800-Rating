#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      int a,b,c;
      cin>>a;
      cin>>b;
      cin>>c;
      if(a+b==c){
          cout<<"+"<<endl;
      }
      else if(a-b==c){
           cout<<"-"<<endl;
      }

   }
}
