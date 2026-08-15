#include<iostream>
using namespace std;

int main(){
    cout<<"Welcome to grades page"<<endl;
    string subjects[] = {"Math", "Physics", "CS", "English"};
    float  grades[]   = {9.5, 8.3, 7.5, 6.0};

    cout << "*** My Grades ***" << endl;
    int n = 4;
    float total  = 0;

    for (int i = 0; i < n; i++) {
        cout << subjects[i] << " : " << grades[i] << endl;
        total += grades[i];
    }

    float gpa = total / n;
    cout << "GPA : " << gpa << endl;

    if (gpa >= 9.5)
        cout << "Status: Excellent!" << endl;
    else if (gpa >=8.0)
        cout << "Status: Good Standing" << endl;
    else
        cout << "Status: Needs Improvement" << endl;

    if(gpa<6) cout<<"Fail!!";
    else cout<<"Pass";

}