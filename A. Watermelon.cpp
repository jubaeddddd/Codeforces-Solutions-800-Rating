#include<iostream>
using namespace std;
bool watermelon(int w){
   if(w%2==0){
       for(int i=1;i<w;i++){
       for(int j=1;j<w;j++){
           if(i%2==0 && j%2==0 && i+j==w){
               return true;
           }
       }
   }
   }
  return false;
}
int main(){
  int w;
  cin>>w;
  int answer=watermelon(w);
  if(answer){
      cout<<"YES";
  }
  else{
       cout<<"NO";
  }
}
