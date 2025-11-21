#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << endl;

    cout << "Enter the second number: ";
    cin >> num2;
    cout << endl;
    
    cout << "Enter the third number: ";
    cin >> num3;
    cout << endl;
    
    int simpleInterest = (num1+num2+num3)/3;
    
    cout << "Simple of interest of these 3 numbers is " << simpleInterest;
    
    return 0;
}
