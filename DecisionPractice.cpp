#include <iostream>
using namespace std;

int main() {
    int grade, courseCode;

    // Input
    grade = 87;
    courseCode = 2;
    cout << "Enter grade: " << grade << endl;
    cout << "Enter course code: " << courseCode << endl;

    // --- Determine remark using if-else ---
    if (grade >= 75)
        cout << "Result: Pass" << endl;
    else
        cout << "Result: Fail" << endl;

    // --- Determine course using switch ---
    switch (courseCode) {
        case 1:
            cout << "Course: Programming Fundamentals" << endl;
            break;
        case 2:
            cout << "Course: Data Structures" << endl;
            break;
        case 3:
            cout << "Course: Algorithms" << endl;
            break;
        default:
            cout << "Invalid course code." << endl;
    }

    return 0;
}
