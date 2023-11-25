//print the odd number //

#include<iostream>
#include<stdio.h>
using namespace std;
int product=1;
void fact(int num){
    if(num<=0){
        cout<<product;
        return;
    }
    product*=num;
    fact(num-1);
}

int main(){
    int num;
    cout<<"Enter number";
    cin>>num;
    fact(num);
    // table(num , index)
}



