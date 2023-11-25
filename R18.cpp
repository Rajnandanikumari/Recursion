// Online C++ compiler to run C++ program online
#include<iostream>
#include<stdio.h>
using namespace std;
int product = 1;
int power(int num)
{
  if(num<=0){
  return product;
}
product*=num;

//power(num-1);
return power(num);
}

int main()
{
  
    cout<<power(2);
    return 0;

}






