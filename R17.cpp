// Online C++ compiler to run C++ program online
#include<iostream>
#include<stdio.h>
using namespace std;
int product =1;
int productN(int num)
{
  if(num==0){
  return product;
}
product*=num;
//power(num-1);
return productN(num-1);
}

int main()
{
  
    cout<<productN(5);
    return 0;

}






