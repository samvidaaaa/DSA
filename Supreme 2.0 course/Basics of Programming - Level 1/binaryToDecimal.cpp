#include <iostream>
#include <math.h>
using namespace std;

int binaryToDecimal(int n){
    int decimal = 0;
    int i = 0;
    
    while(n > 0)
    {
        int bit = n % 10;
        decimal = decimal + bit * pow(2, i++);
        n = n / 10;
    }
    return decimal;
}

int main()
{
    int n;
    cin >> n;
    
    int decimalNum = binaryToDecimal(n);
    cout << "decimal number of binary number --> " << n << " is " << decimalNum << endl;

    return 0;
}
