#include<iostream>
using namespace std;
int main(){
    float l,b;
    cout<<"enter lenght and breadth";
    cin>>l>>b;
    float a=l*b;
    float p=2*(l+b);
    cout<<a<<endl<<p<<endl;
    if(a>p)cout<<"area is greater";
    else if(a<b)cout<<"perimeter is greater";
    else cout<<"both are equal";
    return 0;




}