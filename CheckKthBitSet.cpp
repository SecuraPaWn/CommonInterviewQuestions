#include<iostream>
#include<cstdio>
using namespace std;

/* Program to check if Kth bit of an integer is set or not*/

bool IfkthBitSet(int x,int k)
{
if(x & 1<<(k-1))
{cout<<"true"<<endl;
return true;}
cout<<"false"<<endl;
return false;
}
int main()
{
IfkthBitSet(4,3);
IfkthBitSet(0,3);
return 0;
}
