#include<iostream>
#include<stdio.h>
using namespace std;
int product =1;
int power(int num)
{
  if(num>=0){
  cout<<product;
}
product*=num;
power(num-1);
}

int main()
{
    int num;
    cout<<"Enter the number\n";
    cin>>num;
    power(num);
    return 0;

}






