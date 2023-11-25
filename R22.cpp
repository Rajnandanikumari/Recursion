// Online C++ compiler to run C++ program online
// 
#include<iostream>
#include<stdio.h>
using namespace std;
int product =1;
void power(int b,int e)
{
  if(e<=0){
  cout<<product;
  return;
  }
  product*=b;
  power(b,e);

}

int main()
{
  
    power(25,1/2);
    return 0;

}






