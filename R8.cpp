//print the sum of digit  //

#include<iostream>
#include<stdio.h>
using namespace std;
int sum =1;
void sod(int num){
    if(num<=0){
        cout<<sum;
        return;
    }
    //if(start%2!=0){
      //int sum=0;
      int rem=num%10;
      sum=sum+rem;
      sod(num/10);
}

int main(){
    int num;
    cout<<"Enter number";
    cin>>num;
    sod(num);
    // table(num , index)
    return 0;
}



