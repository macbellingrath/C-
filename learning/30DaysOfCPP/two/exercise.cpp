#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "Hello ";


    // Declare second integer, double, and String variables.
    int i2;
    double d2;
    string s2;

    // Read and save an integer
    string l1;
    getline(cin, l1);
    i2 = stoi(l1);

    // Read and save double
    string l2;
    getline(cin, l2);
    d2 = stod(l2);

    // Read and save String
    getline(cin, s2);

    // Print the sum of both integer variables on a new line.
    cout << i + i2 << endl;

     // Print the sum of the double variables on a new line with precision of 1
    cout << fixed << setprecision(1) << d + d2 << endl;

    // Concatenate and print the String variables on a new line
    cout << s + s2 << endl;
    // The 's' variable above should be printed first.

    return 0;
}
