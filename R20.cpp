// Online C++ compiler to run C++ program online
/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
// Online C++ compiler to run C++ program online
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
    int b,e;
    cout<<"Enter base number\n"<<endl;
    cin>>b;
    cout<<"Enter expotential number\n"<<endl;
    cin>>e;
    power(b,e);
    return 0;

}







