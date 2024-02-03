#include<iostream>
using namespace std;
 main(){
    int x,y;
    cout<<"enter x value";
    cin>>x;
    cout<<"enter y value";
    cin>>y;
    if(x==0 && y==0) cout<<"origin";
    else if(x==0) cout<<"the point lies on y plane";
    else if (y==0) cout<<"the point lies on x plane";
    else cout<<"the point lies on the xy plane";
    

}