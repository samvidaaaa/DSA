#include <iostream>
using namespace std;

int main()
{
    // outer loop --> print 4 rows
    for(int row = 0; row < 4; row++)
    {
        // inner loop
        for(int col = 0; col < 5; col++)
        {
            // condition 1 --> print 5 stars
            if(row==0 || row==3)
            {
                cout << "* ";
            }
            // condition 2 --> 1 star, 3 space, 1 star
            else
            {
                if(col==0 || col==4)
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
        }
        cout << endl;
    }

    return 0;
}
