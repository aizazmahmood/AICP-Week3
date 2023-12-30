#include <iostream>
#include <string>
using namespace std;

void displayMenu(string studentID) {
    cout << "Student ID: " << studentID << endl;
    cout << "1. Display the bill of slab 1 and slab 2\n";
    cout << "2. Display the bill of slab 3\n";
    cout << "Any other key to exit\n";
}


void costSlab1(const int matrix[][3]) {
    int units;
    cout << "Enter the number of units for slab 1: ";
    cin >> units;

    int cost = units <= matrix[0][0] ? units * matrix[2][0] : matrix[0][0] * matrix[2][0] + (units - matrix[0][0]) * matrix[2][1];

    cout << "Cost for slab 1: Rs. " << cost << endl;
}


void costSlab2(const int matrix[][3]) {
    int units;
    cout << "Enter the number of units for slab 2: ";
    cin >> units;

    int cost = units <= matrix[0][1] ? units * matrix[2][1] : matrix[0][1] * matrix[2][1] + (units - matrix[0][1]) * matrix[2][2];

    cout << "Cost for slab 2: Rs. " << cost << endl;
}


void costSlab3(const int matrix[][3]) {
    int units;
    cout << "Enter the number of units for slab 3: ";
    cin >> units;

    int cost = units * matrix[2][2];

    cout << "Cost for slab 3: Rs. " << cost << endl;
}



int main() {
    
    string studentID = "XY12345678";

    
    int electricityMatrix[3][3] = {
        {50, 150, 250},
        {100, 200, 300},
        {10, 15, 20}
    };

    
    displayMenu(studentID);

   
    int choice;
    while (true) {
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                costSlab1(electricityMatrix);
                break;
            case 2:
                costSlab2(electricityMatrix);
                break;
            case 3:
                costSlab3(electricityMatrix);
                break;
            default:
                cout << "Exiting program. Goodbye!" << endl;
                return 0;
        }
    }

    return 0;
}


