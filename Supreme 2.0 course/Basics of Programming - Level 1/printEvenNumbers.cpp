#include <iostream>
using namespace std;

// print even numbers

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    cout << "Printing all the even number till the number given by the user!" << endl;
    for(int i = 2; i <= num; i=i+2)
    {
        cout << i << endl;
    }
    cout << "Task completed";
    
    return 0;
}
