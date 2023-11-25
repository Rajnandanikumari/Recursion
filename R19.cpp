// 
#include<iostream>
#include<stdio.h>
using namespace std;
int product =1;
void power(int b,int e)
{
  if(e==0){
  cout<<product;
  return;
  }
  product*=b;
  power(b,e-1);

}

int main()
{
  
    power(3,2);
    return 0;

}






