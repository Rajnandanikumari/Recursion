//print the odd number //

#include<iostream>
#include<stdio.h>
using namespace std;
void Odd(int start ,int end){
    if(start >end){
        return;
    }
    if(start%2!=0){
        cout<<start<<"/n";
    }
    Odd(start+1,end);
}

int main(){
    int start,end;
    cout<<"Enter range";
    cin>>start>>end;
    Odd(start,end);
    // table(num , index)
    return 0;
}



