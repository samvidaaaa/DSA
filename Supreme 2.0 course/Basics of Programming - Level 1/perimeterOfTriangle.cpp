#include <iostream>
using namespace std;

int main()
{
    int side1, side2, side3;
    
    cout << "Enter length of side1 of triangle: ";
    cin >> side1;
    cout << endl;
    
    cout << "Enter length of side2 of triangle: ";
    cin >> side2;
    cout << endl;
    
    cout << "Enter length of side3 of triangle: ";
    cin >> side3;
    cout << endl;
    
    int perimeter = side1+side2+side3;
    
    cout << "Perimeter of the triangle is " << perimeter;

    return 0;
}
