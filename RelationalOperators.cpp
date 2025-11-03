#include <iostream>
using namespace std;

int main() {
    // Step 2: Declare integer variables
    int a = 5, b = 10, c = 5;

    // Step 3: Test relational expressions and display results
    cout << "a == b: " << (a == b) << endl;
    cout << "a != c: " << (a != c) << endl;
    cout << "a < b: " << (a < b) << endl;
    cout << "b > c: " << (b > c) << endl;
    cout << "(a + c) <= b: " << ((a + c) <= b) << endl;

    // Step 4: Character comparison example
    cout << "'A' < 'a': " << ('A' < 'a') << endl;

    // Explanation
    cout << "\nExplanation: In ASCII, uppercase 'A' has a smaller value than lowercase 'a'.\n";
    cout << "So the expression ('A' < 'a') is TRUE, which means it outputs 1.\n";

    return 0;
}
