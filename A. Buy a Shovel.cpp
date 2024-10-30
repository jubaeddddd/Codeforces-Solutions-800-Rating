#include<bits/stdc++.h>
using namespace std;
int main(){
   int a,b;
   cin>>a;
   cin>>b;
   int countt=1;
   while((countt*a)%10!=b){
        if(countt*a%10==0){
            break;
        }
       countt++;
   }
   cout<<countt<<endl;
}
