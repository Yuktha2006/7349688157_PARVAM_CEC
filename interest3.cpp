#include <iostream>
#include <math.h>  
using namespace std;
int main() {
    int choice;
    float principal, rate, time;
    cout << "Select interest type:\n";
    cout << "1. Simple Interest\n";
    cout << "2. Compound Interest\n";
    cout << "3. Both Simple and Compound Interest\n";
    cout << "Enter your choice (1, 2 or 3): ";
    cin >> choice;
    cout << "Enter principal amount: ";
    cin >> principal;
    cout << "Enter rate of interest: ";
    cin >> rate;
    cout << "Enter time (in years): ";
    cin >> time;
    switch (choice) {
        case 1: {
            float simpleInterest = (principal * rate * time) / 100;
            cout << "Simple Interest = " << simpleInterest << endl;
            break;
        }
        case 2: {
            float amount = principal * pow(1 + rate / 100, time);
            float compoundInterest = amount - principal;
            cout << "Compound Interest = " << compoundInterest << endl;
            break;
        }
        case 3: {
            float simpleInterest = (principal * rate * time) / 100;
            float amount = principal * pow(1 + rate / 100, time);
            float compoundInterest = amount - principal;
            cout << "Simple Interest = " << simpleInterest << endl;
            cout << "Compound Interest = " << compoundInterest << endl;
            break;
        }
        default:
            cout << "Invalid choice. Please select 1, 2 or 3." << endl;
    }
    return 0;
}
