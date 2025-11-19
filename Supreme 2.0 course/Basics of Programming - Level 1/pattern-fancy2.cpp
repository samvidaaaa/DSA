#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    //outer loop
    for(int i = 0; i < n; i++)
    {
        char ch;
        // inner loop 1, to print the increasing pattern in column
        for(int j = 0; j < i+1; j++)
        {
            int number = j+1;
            ch = number + 'A' - 1;
            cout << ch;
        }
        // inner loop 2, to print the decreasing pattern till A
        for(char alphabet = ch; alphabet > 'A'; )
        {
            alphabet -= 1;
            cout << alphabet;
        }
        cout << endl;
    }

    return 0;
}
