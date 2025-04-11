#include <iostream>
using namespace std;

// Function to add two numbers
float add(float a, float b) {
    // TODO: Implement addition logic
}

// Function to subtract two numbers
float subtract(float a, float b) {
    // TODO: Implement subtraction logic
    return a-b;
}

// Function to multiply two numbers
float multiply(float a, float b) {
    // TODO: Implement multiplication logic
}

// Function to divide two numbers
float divide(float a, float b) {
    // TODO: Implement division logic
}

int main() {
    float num1, num2;
    int choice;

    cout << "Simple Calculator in C++" << endl;
    cout << "-------------------------" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    switch (choice) {
        case 1:
            cout << "Result: " << add(num1, num2) << endl;
            break;
        case 2:
            cout << "Result: " << subtract(num1, num2) << endl;
            break;
        case 3:
            cout << "Result: " << multiply(num1, num2) << endl;
            break;
        case 4:
            cout << "Result: " << divide(num1, num2) << endl;
            break;
        default:
            cout << "Invalid choice! Please select from 1 to 4." << endl;
    }

    return 0;
}
