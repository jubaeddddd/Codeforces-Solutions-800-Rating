#include<iostream>
using namespace std;
int main(){
   int n;
   cin>>n;
   int k;
   cin>>k;
   int arr[n];
   for(int i=0;i<n;i++){
      cin>>arr[i];
   }
   int element=arr[k-1];
   int countt=0;
   for(int i=0;i<n;i++){
       if(element!=0){
             if(arr[i]>=element){
                  countt++;
           }
       }
       else if(element==0){
             if(arr[i]>element){
                  countt++;
           }
       }
   }
   cout<<countt<<endl;
}
