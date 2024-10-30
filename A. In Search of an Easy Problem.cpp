#include<iostream>
using namespace std;
int hardEasy(int n){
    bool answer=true;
    for(int i=0;i<n;i++){
      int student;
      cin>>student;
      if(student==0){
          answer=true;
      }
      else if(student==1){
          answer=false;
          break;
      }
   }
   return answer;
}
int main(){
   int n;
   cin>>n;
   int mainanswer=hardEasy(n);
   if(mainanswer){
       cout<<"EASY";
   }
   else{
      cout<<"HARD";
   }
}
