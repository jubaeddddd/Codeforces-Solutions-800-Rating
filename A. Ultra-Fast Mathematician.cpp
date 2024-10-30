#include<iostream>
#include<string>
using namespace std;
int main(){
   string str1;
   string str2;
   getline(cin,str1);
   getline(cin,str2);
   if(str1.length()==str2.length()){
        int i=0;
       while(str1[i]!='\0'){
          if(str1[i]==str2[i]){
              cout<<"0";
          }
          else{
              cout<<"1";
          }
          i++;
       }
   }
}
