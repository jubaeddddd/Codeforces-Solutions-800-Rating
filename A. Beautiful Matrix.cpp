#include<iostream>
using namespace std;
int main(){
    int arr[6][6];
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            cin>>arr[i][j];
        }
    }
   int x=-1,y=-1;
   for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            if(arr[i][j]==1){
                 x=i;
                 y=j;
                 break;
             }
        }
        if(x!=-1)
            break;
    }
    int answer=0;
    if(x>=3 && y>=3){
          answer=(x-3)+(y-3);
    }
    else if(x<3 && y<3){
         answer=(3-x)+(3-y);
    }
    else if(x<=3 && y>=3){
         answer=(3-x)+(y-3);
    }
    else if(x>=3 && y<=3){
         answer=(x-3)+(3-y);
    }
    cout<<answer<<endl;
}
