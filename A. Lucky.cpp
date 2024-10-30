#include<iostream>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
       int n;
       cin>>n;
       int sum1=0;
       int sum2=0;
       for(int i=0;i<3;i++){
            int rem=n%10;
            sum1+=rem;
            n=n/10;
       }
       for(int i=0;i<3;i++){
            int rem=n%10;
            sum2+=rem;
            n=n/10;
       }
       if(sum1==sum2){
          cout<<"YES"<<endl;
       }
       else{
           cout<<"NO"<<endl;
       }
   }

}
