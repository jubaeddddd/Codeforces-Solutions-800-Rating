#include<iostream>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(n%2!=0){
         int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        if(sum%2==0){
             cout<<"YES"<<endl;
        }
        else{
              cout<<"NO"<<endl;
        }
    }
    else{
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        if(sum%2==0){
             cout<<"YES"<<endl;
        }
        else{
              cout<<"NO"<<endl;
        }
    }
  }
}
