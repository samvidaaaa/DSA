#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    // outer loop --> 5 rows
    for(int i = 0; i < n; i++)
    {
        // in each row, print (n-i) stars
        for(int j = 0; j < n-i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
