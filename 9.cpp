#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter the charracter";
    cin>>ch;
    if(ch>=97&&ch<=122) cout<<"it is a alphabet";
    else if (ch>=48 && ch <=57) cout << "It is digit";
    else if(ch>=65&&ch<=90) cout<<"it is a alphabet";
    else   cout<<"special character";
    return 0;
}