#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n :";
    cin>>n;
    for(int i=65;i<65+n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<(char)i<<" ";
        }
        cout<<endl;
    }
    return 0;
}