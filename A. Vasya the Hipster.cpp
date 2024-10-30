#include<iostream>
using namespace std;
int main(){
   int a,b;
   cin>>a;
   cin>>b;
   int flag=1,dif_pair=0,same_pair=0;
   while(flag=1){
       if(a>0&b>0){
           dif_pair++;
           a-=1;
           b-=1;
       }
       else if(a>=2 && b==0){
            same_pair++;
            a-=2;
       }
       else if(a==0 && b>=2){
            same_pair++;
            b-=2;
       }
       else{
           flag=0;
           break;
       }
   }
     cout<<dif_pair<<" "<<same_pair<<endl;
}
