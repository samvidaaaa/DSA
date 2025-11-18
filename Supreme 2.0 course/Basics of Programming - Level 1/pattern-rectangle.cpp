#include <iostream>
using namespace std;

int main()
{
    // outer loop --> 3 rows
    for(int i = 0; i < 3; i++)
    {
        // inner loop --> print 5 stars in each row
        for(int j = 0; j < 5; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
