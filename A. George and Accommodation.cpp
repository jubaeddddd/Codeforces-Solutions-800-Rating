#include<iostream>
using namespace std;
int main(){
   int n;
   cin>>n;
   int countt=0;
   for(int i=0;i<n;i++){
      int p;
      int q;
      cin>>p;
      cin>>q;
      if(p<q && q-p>=2){
          countt++;
      }
   }
   cout<<countt<<endl;
}
