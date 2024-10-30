#include<iostream>
using namespace std;
int main(){
   int n,k;
   cin>>n;
   cin>>k;
   int countt=0;
   int time=240;
   for(int i=1;i<=n;i++){
        time=time-i*5;
        if(k>time){
              break;
        }
        else{
              countt++;
        }
   }
   cout<<countt<<endl;
}
