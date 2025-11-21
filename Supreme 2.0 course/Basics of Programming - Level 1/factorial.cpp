#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int num = n;
    
    int factorial = 1;
    
    while(n >= 1)
    {
        factorial = factorial * n;
        n -= 1;
    }
    cout << "Factorial of " << num << " is " << factorial << endl;

    return 0;
}
