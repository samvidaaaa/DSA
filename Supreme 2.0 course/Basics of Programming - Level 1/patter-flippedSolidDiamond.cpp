#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    // PART 1
    for(int i = 0; i < n; i++)
    {
        // INVERTED PYRAMID 1
        for(int j = 0; j < n-i; j++)
        {
            cout << "*";
        }
        // FULL PYRAMID
        for(int j = 0; j < 2*i+1; j++)
        {
            cout << " ";
        }
        // INVERTED PYRAMID 2
        for(int j = 0; j < n-i; j++)
        {
            cout << "*";
        }
        
        cout << endl;
    }
    
    // PART 2
    for(int i = 0; i < n; i++)
    {
        // HALF PYRAMID 1
        for(int j = 0; j < i+1; j++)
        {
            cout << "*";
        }
        // INVERTED FULL PYRAMID
        for(int j = 0; j < 2*n-2*i-1; j++)
        {
            cout << " ";
        }
        // HALF PYRAMID 2
        for(int j = 0; j < i+1; j++)
        {
            cout << "*";
        }        
        cout << endl;
    }
    return 0;
}
