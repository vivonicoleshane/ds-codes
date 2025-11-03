#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 10, c = 5;

    cout << "a == b: " << (a == b) << endl;
    cout << "a != c: " << (a != c) << endl;
    cout << "a < b: " << (a < b) << endl;
    cout << "b > c: " << (b > c) << endl;
    cout << "(a + c) <= b: " << ((a + c) <= b) << endl;

    // Character comparison
    cout << "'A' < 'a': " << ('A' < 'a') << endl;

    // Explanation
    cout << "\nExplanation:" << endl;
    cout << "In ASCII, 'A' = 65 and 'a' = 97, so 'A' < 'a' is true (1)." << endl;

    return 0;
}
