#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    
    int n = num/2;
    
    // FIRST PYRAMID
   for(int i = 0; i < n-1; i++)
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
    
    // SECOND PYRAMID
    // outer loop
    for(int i = 0; i < n; i++)
    {
        // inner loop
        // printing space first
        for(int j = 0; j < i; j++)
        {
            cout << " ";
        }
        
        // printing stars
        for(int j = 0; j < n-i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
