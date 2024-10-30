#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int count1=0,count2=0;
  while(n--){
    int a,b;
    cin>>a;
    cin>>b;
    if(a>b)
        count1++;
    else if(a<b)
        count2++;
    else{
         count1++;
         count2++;
    }
  }
  if(count1>count2){
    cout<<"Mishka";
  }
  else if(count1<count2){
    cout<<"Chris";
  }
  else{
      cout<<"Friendship is magic!^^";
  }
}
