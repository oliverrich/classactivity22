#include <iostream>
#include "utils/getFirstName.h"
#include "utils/getLastName.h"

using namespace std;

int main() {
    string fullName;


    cout << "Enter full name: ";
    getline(cin, fullName);


    string firstName = getFirstName(fullName);
    string lastName = getLastName(fullName);


    if (!firstName.empty() && !lastName.empty()) {
        cout << "first Name: " << firstName << endl;
        cout << "last Name: " << lastName << endl;
    } else {
        cout <<"error: Please enter a valid full name with a space!" << endl;
    }

    return 0;
}


