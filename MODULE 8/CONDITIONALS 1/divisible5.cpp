#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter the number that you want to check : ";
    cin>>x;
    if(x%5==0)
    cout<<"Number is divisible by 5";
    else
    cout<<"Number is not divisible by 5";
    return 0;
}