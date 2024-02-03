#include<iostream>
using namespace std; 
int main(){
    int a,b,c;
    cout<<"enter the marks of the student 1\n";
    cin>>a;
    cout<<"enter the marks of the student 2\n";
    cin>>b;
    cout<<"enter the marks of the student 3\n";
    cin>>c;
    if(a>=b) {
        if(b>=c)cout<<"c is smallest";
        else cout<<"b is smallest";
    }
    else{//b>=c
        if(c>=a) cout<<"a is smallest";
        else cout<<"c is smallest";
    }
}
