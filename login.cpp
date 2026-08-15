#include<iostream>
#include<string.h>
using namespace std;


int main(){
    string username,password;
    cout<<"***** Login Page *****";

    cout<<"Enter Username:"<<endl;
    cin>>username;

    cout<<"Enter Password:"<<endl;
    cin>>password;

    if(username=="nirupama" && password=="123")
    cout<<"Login successful!";
    else cout<<"Invalid credentials!";


}