#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int a[t];
    for(int i=0;i<t;i++)
    {
        cin>>a[i];
        if(a[i]==1 || a[i]==2)
        {
            cout<<"0"<<endl;
        }
        else
        {
            cout<<(a[i]-1)/2<<endl;
        }
    }
}
