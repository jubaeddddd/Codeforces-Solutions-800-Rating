#include<iostream>
using namespace std;
int main(){
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   int countt=1;
   int blog_start=arr[0];
   for(int i=1;i<n;i++){
         if(arr[i]!=blog_start){
             blog_start=arr[i];
             countt++;
         }
   }
   cout<<countt<<endl;
}