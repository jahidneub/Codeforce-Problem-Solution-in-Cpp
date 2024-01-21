#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
   int arry[4];
   for(int i=0;i<4;i++)
   {
       cin>>arry[i];
   }
   sort(arry,arry+4);

   int c=(arry[3]-arry[0]);
   int b=(arry[2]-c);
   int a=arry[3]-(b+c);

   cout<<a<<" " <<b<<" "<<c ;
}
