//print the sum of  even digits  //
#include<iostream>
#include<stdio.h>
using namespace std;
int sum =0;
void soe(int num){
    if(num<=0){
        cout<<sum;
        return;
    }
    //if(start%2!=0){
      //int sum=0;
      int rem=num%10;
      if(rem%2==0){
            sum=sum+rem;
      }
     
      soe(num/10);
}

int main(){
    int num;
    cout<<"Enter number";
    cin>>num;
    soe(num);
    // table(num , index)
    return 0;
}




