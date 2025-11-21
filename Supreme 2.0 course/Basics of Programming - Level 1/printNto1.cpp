#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << endl;
    
    cout << "Printing n to 1 below:" << endl;
    for(int i = n; i >= 1; i--)
    {
        cout << i << endl;
    }
    cout << "Printed all the numbers from n to 1 successfully!";
    
    return 0;
}
