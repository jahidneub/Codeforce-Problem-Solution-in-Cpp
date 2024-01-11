#include<iostream>
using namespace std;
int main()
{
    int n,h;
    cin>>n>>h;
    int arr[n],count1=0,count2=0;
    for(int i=0;i<n;i++)
    {
      cin>>arr[i];
      if(arr[i]<=h)
      {
          count1++;
      }
      else
      {
          count2+=2;
      }
    }
    cout<<count1+count2;
}
