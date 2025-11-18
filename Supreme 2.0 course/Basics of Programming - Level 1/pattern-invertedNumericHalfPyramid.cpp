#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    // outer loop --> 5 rows
    for(int i = 0; i < n; i++)
    {
        // in each row, print (n-i) character (j+1)
        for(int j = 0; j < n-i; j++)
        {
            cout << j+1 << " ";
        }
        cout << endl;
    }

    return 0;
}
