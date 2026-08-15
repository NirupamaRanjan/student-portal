#include <iostream>
using namespace std;

int main(){
   
    int choice;

    cout << "****** Student Portal *****" << endl;
    cout << "1. Login" << endl;
    cout << "2. View Dashboard" << endl;
    cout << "3. View Profile" << endl;
    cout << "4. View Grades" << endl;
    cout << "5. Settings" << endl;
    cout << "6. Exit" << endl;
    cout << "Enter choice: ";
    cin >> choice;

    cout << "You selected option " << choice << endl;

    return 0;
}
