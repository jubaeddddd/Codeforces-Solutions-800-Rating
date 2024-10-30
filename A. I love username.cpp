#include<iostream>
using namespace std;
int main(){
   int n;
   cin>>n;
   if(n==1){
        int arr[0];
        cin>>arr[0];
       cout<<"0";
   }
   else if(n>1){
       int arr[n];
   for(int i=0;i<n;i++){
      cin>>arr[i];
   }
   int temp=0;
   int highest=arr[0];
   int lowest=arr[1];
   int countt;
   if(highest==lowest){
       countt=0;
   }
   else{
       countt=1;
   }
   if(lowest>highest){
       temp=highest;
       highest=lowest;
       lowest=temp;
   }
   for(int i=2;i<n;i++){
        int teemp=0;
       if(arr[i] >highest ){
             countt++;
             highest=arr[i];
       }
       else if(arr[i]<lowest){
            countt++;
            lowest=arr[i];
       }
   }
   cout<<countt<<endl;
   }
}
