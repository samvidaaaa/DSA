#include <iostream>
using namespace std;

int main()
{
    int lenofside1, lenofside2, lenofside3;
    cout << "Enter length of side 1 of a triangle: ";
    cin >> lenofside1;
    cout << endl;
    
    cout << "Enter length of side 2 of a triangle: ";
    cin >> lenofside2;
    cout << endl;
    
    cout << "Enter length of side 3 of a triangle: ";
    cin >> lenofside3;
    cout << endl;
    
    if((lenofside1+lenofside2) > lenofside3 || (lenofside2+lenofside3) > lenofside1 || (lenofside1+lenofside3) > lenofside2)
    {
        cout << "It is a valid triangle!";
    }
    else
    {
        cout << "It is not a valid triangle!";
    }
}
