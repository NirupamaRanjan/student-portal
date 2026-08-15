#include <iostream>
using namespace std;

int main(){
   
    int nav;
    cout << "****** Student-portal v1.0 *****" << endl;
    cout<<"Welcome to the student portal!!"<<endl;
    cout << "1. Login" << endl;
    cout << "2. View Dashboard" << endl;
    cout << "3. View Profile" << endl;
    cout << "4. View Grades" << endl;
    cout << "5. Settings" << endl;
    cout << "6. Exit" << endl;
    cout << "Enter any option from above: ";
    cin >> nav;

    cout << "You selected option " << nav << endl;

    return 0;
}
