#include<stdio.h>
#include<iostream>
#include<chrono>
#include<thread>
#include<conio.h>
using std::cout;
using std::cin;
using std::endl;

int main() {
    float num1, num2;
    char op;

    cout << "Enter the 1st number: ";
    cin >> num1;
    cout << "Enter the 2nd number: ";
    cin >> num2;
    cout << "Enter the operator (+, -, *, /): ";
    cin >> op;

    switch(op) {
        case '+':
            cout << "Result: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Result: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Result: " << num1 * num2 << endl;
            break;
        case '/':
            if(num2 == 0) {
                cout << "Division by zero is not allowed!" << endl;
                std::this_thread::sleep_for(std::chrono::seconds(3));
                return 1;
            } else {
                cout << "Result: " << num1 / num2 << endl;
            }
            break;
        default:
            cout << "Invalid operator!" << endl;
            std::this_thread::sleep_for(std::chrono::seconds(3));
            return 1;
    }

    cout << "Press any key to exit...";
    getch();
}