#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    // outer loop
    for(int i = 0; i < n; i++)
    {
        // inner loop
        // printing space first
        for(int j = 0; j < n-i-1; j++)
        {
            cout << " ";
        }
        
        // printing stars
        for(int j = 0; j < i+1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
