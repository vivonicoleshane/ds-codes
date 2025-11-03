#include <iostream>
using namespace std;

int main() {
    int grade;

    // Input grade
    grade = 87;
    cout << "Enter grade: " << grade << endl;

    // Nested if statements
    if (grade >= 90) {
        if (grade <= 100)
            cout << "Remark: Excellent" << endl;
    } else {
        if (grade >= 80) {
            if (grade <= 89)
                cout << "Remark: Very Good" << endl;
        } else {
            if (grade >= 75) {
                if (grade <= 79)
                    cout << "Remark: Satisfactory" << endl;
            } else {
                cout << "Remark: Fail" << endl;
            }
        }
    }

    return 0;
}
