#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int arr[3];
        for(int i=0;i<3;i++){
            cin>>arr[i];
        }
        if(arr[0]==arr[1]){
            cout<<arr[2]<<endl;
        }
        else if(arr[1]==arr[2]){
            cout<<arr[0]<<endl;
        }
        else if(arr[0]==arr[2]){
            cout<<arr[1]<<endl;
        }
    }
}
