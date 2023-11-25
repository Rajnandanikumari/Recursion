//reverse the given number //

#include<iostream>
#include<stdio.h>
using namespace std;
int sum=0;
int rem=0;
void reverse(int num ){
    if(num<=0){
        cout<<sum;
        return;
    }
    //if(start%2!=0){
       int rem=num%10;
        sum = sum*10+rem;
       reverse(num/10);
}

int main(){
    int num;
    cout<<"Enter number";
    cin>>num;
    reverse(num);
}



