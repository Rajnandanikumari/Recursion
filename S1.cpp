#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    string fname = "Rajnandani";
    string lname = "Kumari";
    cout<<"Fname: "<<fname<<"\n";
    cout<<"lname: "<<lname<<"\n";
    string fullname = fname+" "+lname;
    cout<<fullname<<endl;

    string name = fname.append(lname);
    cout<<"THE NAMe IS : "<<name<<endl;

    cout<<"SIZE OF : "<<fname<<" : "<<fname.length()<<endl;
    cout<<"SIZE OF : "<<lname<<" : "<<lname.size()<<endl;

    string sen = "hello";

    for(int i=0;i<sen.size();i++){
        cout<<sen[i]<<"\t";
    
    }
    cout<<"\"Hello\" "<<endl;
    cout<<"\\Hello\' "<<endl;
    string user;
    cout<<"ENTER NAME"<<endl;
    getline(cin,user,'\n');
    cout<<user;
    return 0;
}