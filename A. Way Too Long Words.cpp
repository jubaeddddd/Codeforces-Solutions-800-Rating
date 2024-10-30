#include<iostream>
using namespace std;
int main(){
   int n;
   cin>>n;
   for(int i=0;i<n;i++){
       string str;
       cin>>str;
       int leength=str.length();
       if(leength>10){
            int num=leength-2;
            cout<<str[0]<<num<<str[leength-1]<<endl;
       }
       else{
          for(int i=0;i<leength;i++){
              cout<<str[i];
          }
          cout<<endl;
       }
   }
}
