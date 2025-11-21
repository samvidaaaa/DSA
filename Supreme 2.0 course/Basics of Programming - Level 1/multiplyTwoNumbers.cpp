#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << endl;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << endl;
    
    int ans = num1 * num2;
    
    cout << "Multiplication of " << num1 << " and " << num2 << " is " << ans << endl;

    return 0;
}
