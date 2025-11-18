#include <iostream>
using namespace std;

int main()
{
    // outer loop --> 4 rows
    for(int i = 0; i < 4; i++)
    {
        // inner loop --> print 4 stars in each row
        for(int j = 0; j < 4; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
