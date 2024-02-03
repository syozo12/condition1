#include<iostream>
using namespace std;
int main(){
    int r,area,circum;
    cout<<"enter the radius";
    cin>>r;
    area=3.14*r*r;
    circum=2*3.14*r;
    cout<<area<<"\n"<<circum<<endl;
    if(area>circum) cout<<"area is greater";
    else if(circum>area) cout<<"circum is greater";
    else cout<<"both are equal";
    return 0;
    
}