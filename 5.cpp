using namespace std;
#include<iostream>
int main(){
    int a,b,c;
    cout<<"enter the first side";
    cin>>a;
    cout<<"enter the second side";
    cin>>b;
    cout<<"enter the third side";
    cin>>c;
    if(a==b&&b==c) cout<<"it is equilateral triangle";
    else if(a==b||b==c||a==c) cout<<"it is a iosoceles triangle";
    else  cout<<"it is a scalene triangle";
    return 0;



}