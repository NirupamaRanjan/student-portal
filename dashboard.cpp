#include<iostream>
using namespace std;

int main(){
     vector<string>v(4);
     v={"cricket","Hockey","Polo","Basketball","Badminton","swimming"};
     
    cout<<"******* Dashboard *******"<<endl;
    cout<<"Welcome to your dashboard"<<endl;
    cout<<"Student Information"<<endl;

    cout<<"Name : Nirupama Ranjan"<<endl;
    cout<<"Roll no: 1234"<<endl;
    cout<<"Department: CSE"<<endl;

    cout<<"Extra curriculum activities";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }

    cout<<"This section displays achievments of your college"<<endl;
     
    //work in progress
    vector<string>chosen={"Cricket","Hockey"};
     cout<<"These are activities you have selected"<<endl;
    for(int i=0;i<chosen.size();i++){
        cout<<chosen[i]<<endl;
    }

}