#include<iostream>
#include<cstring>
using namespace std;
int main(){
   string str1;
   string str2;
   getline(cin,str1);
   getline(cin,str2);
   int value=strcmp(str1,str2);
   cout<<value;
}
