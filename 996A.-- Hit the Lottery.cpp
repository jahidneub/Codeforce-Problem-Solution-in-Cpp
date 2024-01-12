#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int result=n/100;
    int left=n%100;

    result+=left/20;
    left=left%20;

    result+=left/10;
    left=left%10;

    result+=left/5;
    left=left%5;

    result+=left/1;
    cout<<result;





}
