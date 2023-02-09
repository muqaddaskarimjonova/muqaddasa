#include<iostream>
using namespace std;
void mul(int x,int y);
int main()
{
   mul(10,20);
    mul(20,30);
    mul(30,40);
    return 0;
}
void mul(int x,int y)
{
cout<<x*y<<" ";
}