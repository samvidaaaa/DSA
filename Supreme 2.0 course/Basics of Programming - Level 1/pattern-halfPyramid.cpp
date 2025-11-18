#include <iostream>
using namespace std;

int main()
{
    // outer loop --> 5 rows
    for(int i = 0; i < 5; i++)
    {
        // in each row, print (i+1) star
        for(int j = 0; j < i+1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
