#include<iostream>
using namespace std;

int main(){
    cout<<"Welcome to grades page"<<endl;
    string subjects[] = {"Math", "Physics", "CS", "English"};
    float  grades[]   = {3.7, 3.3, 4.0, 3.0};

    cout << "*** My Grades ***" << endl;
    int n = 4;
    float total  = 0;

    for (int i = 0; i < n; i++) {
        cout << subjects[i] << " : " << grades[i] << endl;
        total += grades[i];
    }

    float gpa = total / n;
    cout << "GPA : " << gpa << endl;


}