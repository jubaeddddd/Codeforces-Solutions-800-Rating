#include<iostream>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int a,b;
    cin>>a;
    cin>>b;
    int countt = (a%b == 0) ? 0 : b-(a%b);
    cout<<countt<<endl;
  }
}
