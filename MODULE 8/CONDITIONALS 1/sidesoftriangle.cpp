#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the first side : ";
    cin>>a;
    cout<<"Enter the second side : ";
    cin>>b;
    cout<<"Enter the third side : ";
    cin>>c;
    if(a+b>c||b+c>a||c+a>>b)
    {
        cout<<"Sides of a triangle";
    }
    else{
        cout<<"Invalid sides of a triangle";
    }
    return 0;
}