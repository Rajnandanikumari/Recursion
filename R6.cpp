//print even number //

#include<iostream>
#include<stdio.h>
using namespace std;
void Even(int start,int end){
    if(start>end){
        return;
    }
    if(start%2==0){
        cout<<start<<"\n";
    }
    Even(start+1,end);
}
int main(){
    int start,end;
    cout<<"Enter the number";
    cin>>start>>end;
    Even(start,end);
    return 0;
}