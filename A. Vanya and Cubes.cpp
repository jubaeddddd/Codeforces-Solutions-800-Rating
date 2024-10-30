#include<iostream>
using namespace std;
int main(){
   int n;
   cin>>n;
   int total=0;
   int key=1;
   int i=1;
   int countt=0;
   if(n==3){
       countt=1;
   }
   else{
       while(total<=n){
        i++;
        key=key+i;
        total=total+key;
        countt++;
        if(total>=n){
            break;
        }
   }
   }
   cout<<countt;
}
