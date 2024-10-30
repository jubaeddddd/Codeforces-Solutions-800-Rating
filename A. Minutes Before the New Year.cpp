#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int h,m;
        cin>>h;
        cin>>m;
        int answer=0;
        if(h==23){
             answer=60-m;
        }
        else if(h==0){
              answer=24*60-m;
        }
        else{
              answer=(24-h)*60-m;
        }
        cout<<answer<<endl;
    }
}
