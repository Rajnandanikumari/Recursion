//print the number 1 to 10 in ascending order (using recusion) //

#include<stdio.h>
#include<iostream>
using namespace  std;
void print(int start, int end){
    //base case (termination case)
    if(start > end){
        return;
    }
    cout<<start<<"\n";
    print(start+1,end);

}
int main(){

    print(1,10);
    return 0;
}