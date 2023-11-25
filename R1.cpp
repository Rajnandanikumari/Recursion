//print the number 1 to 10 in reverse order //(using recursion)

#include<iostream>
#include<stdio.h>
using namespace std;
void print(int start,int end){
    //base case(termination case) //
    if(start > end){
        return;
    }

    print(start+1 , end);
    cout<<start<<"\n";
    //cout<<start<<"\t";
}

int main()
{

    print(1,10);
    return 0;
}