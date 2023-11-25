//print the table of the number which is given by user//

#include<iostream>
#include<stdio.h>
using namespace std;
void table(int num ,int index){
    if(index>10){
        return;
    }
    //if(start%2!=0){
        cout<<num<<"*"<<index<<"="<<(num*index)<<"\n";
        table(num,index+1);
    table(num,index);
}

int main(){
    int num;
    cout<<"Enter number";
    cin>>num;
    table(num,1);
    // table(num , index)
    return 0;
}



