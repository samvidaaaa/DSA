#include <iostream>
using namespace std;

// print maximum of 3 numbers

int main()
{
    int num1, num2, num3;
    cout << "Enter 3 numbers" << endl;
    cout << "num1: ";
    cin >> num1;
    cout << "num2: ";
    cin >> num2;
    cout << "num3: ";
    cin >> num3;
    
    if(num1 > num2 && num1 > num3)
    {
        cout << "num1 is the largest number out of these 3 numbers";
    }
    else if(num2 > num1 && num2 > num3)
    {
        cout << "num2 is the largest number out of these 3 numbers";
    }
    else
    {
        cout << "num3 is the largest number out of these 3 numbers";
    }
    return 0;
}
