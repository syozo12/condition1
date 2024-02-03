#include<iostream>
using namespace std;
int main(){
    float x1,y1,x2,y2,x3,y3;
    cout<<"Enter the coordinates of point 1: ";
    cin>>x1>>y1;
    cout<<"\nEnter the coordinates of point 2: ";
    cin>>x2>>y2;
    cout<<"\nEnter the coordinates of point 3: ";
    cin>>x3>>y3;
    float m1=x2-x1/(y2-y1);
    float m2=x2-x2/(y3-y2);
    if(m1==m2)cout<<"all three points lies on a straight line ";
    else cout<<"they does not lie on the straight line ";
    return 0;

}