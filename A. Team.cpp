#include<iostream>
using namespace std;
int main(){
   int n;
   cin>>n;
   int arr[n][3];
   for(int i=0;i<n;i++){
      for(int j=0;j<3;j++){
          cin>>arr[i][j];
      }
   }
   int mainCount=0;
   for(int i=0;i<n;i++){
    int countt=0;
      for(int j=0;j<3;j++){
           if(arr[i][j]==1){
               countt++;
        }
        if(countt==2){
                  mainCount++;
                  break;
        }
      }
   }
   cout<<mainCount<<endl;
}
