#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number to check if it is a prime number or not: ";
    cin >> num;
    cout << endl;
    
    for(int i = 2; i < num-1; i++)
    {
        if(num%i == 0)
        {
            cout << "It is not a prime number!";
            return 0;
        }
    }
    cout << "It is a prime number!";
    
}
