// Algorithm Challenge
// 12 — Max of Two Numbers

#include <iostream>
using namespace std;

int main()
{
    float num1, num2; // Variables to store user inputs

    // Ask the user to enter two numbers
    cout << "Please enter 2 numbers:\n";
    cin >> num1 >> num2;

    // Compare and find the maximum
    if (num1 > num2)
    {
        cout << "The maximum number is: " << num1 << endl;
    }
    else if (num2 > num1)
    {
        cout << "The maximum number is: " << num2 << endl;
    }
    else
    {
        // Handle the case where both numbers are equal
        cout << "Both numbers are equal: " << num1 << endl;
    }

    return 0;
}
