
//wap to take base and exp from the user and then find out powqer of numbwer //
#include<iostream>
#include<stdio.h>
using namespace std;
int product =1;
void power(int b,int e)
{
  if(e<=0){
  cout<<product;
//  return ;
  }
  product*=b;
  power(b,e-1);

}

int main()
{
    int b,e;
    cout<<"Enter base number\n"<<endl;
    cin>>b;
    cout<<"Enter expotential number\n"<<endl;
    cin>>e;
    power(b,e);
    return 0;

}






