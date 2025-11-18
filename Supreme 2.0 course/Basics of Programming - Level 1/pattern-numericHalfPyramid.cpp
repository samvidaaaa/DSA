#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    // outer loop --> 5 rows
    for(int i = 0; i < n; i++)
    {
        // in each row, print (i+1) characters (j+1)
        for(int j = 0; j < i+1; j++)
        {
            cout << j+1 << " ";
        }
        cout << endl;
    }

    return 0;
}
