#include <iostream>
using namespace std;

int main() {
    int choice;
    double radius, length, width, area;

    choice = 1;       // user chooses option 1
    radius = 5;       // user enters radius 5

    cout << "Menu:" << endl;
    cout << "1. Compute Area of Circle" << endl;
    cout << "2. Compute Area of Rectangle" << endl;
    cout << "3. Exit" << endl;

    cout << "Enter your choice: " << choice << endl;

    switch(choice) {
        case 1:
            cout << "Enter radius: " << radius << endl;
            area = 3.1416 * radius * radius;
            cout << "Area of Circle = " << area << endl;
            break;

        case 2:
            cout << "Enter length: ";
            cin >> length;
            cout << "Enter width: ";
            cin >> width;
            area = length * width;
            cout << "Area of Rectangle = " << area << endl;
            break;

        case 3:
            cout << "Goodbye!" << endl;
            break;

        default:
            cout << "Invalid choice." << endl;
    }

    return 0;
}
