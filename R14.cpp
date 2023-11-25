//print the sum of  even digits  //
#include<iostream>
#include<stdio.h>
using namespace std;
int sum =0;
void min(int i,int j){
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++){
            if(min>arr[i][j]){
             min=arr[i][j];
            }
        }
    }
        cout<<"min element is : "<<min;
      
      }

int main(){
    int rows=2,cols=2;
    int arr[2][2]= {1,4,5,3};
    int n=sizeof(arr)/sizeof(int);
    min=arr[0][0];
    min(num);
    // table(num , index)
    return 0;
}











