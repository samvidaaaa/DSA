#include <iostream>
#include <math.h>
using namespace std;

int decimalToBinaryMethod1(int n){
    // Division method
    int i = 0;
    int binaryNo = 0;
    while(n > 0)
    {
        int bit = n % 2;
        binaryNo = bit * pow(10, i++) + binaryNo;
        n = n / 2;
    }
    return binaryNo;
}

int decimalToBinaryMethod2(int n){
    // Bitwise method
    int i = 0;
    int binaryNo = 0;
    while(n > 0)
    {
        int bit = (n & 1); // curly brackets are important here
        binaryNo = bit * pow(10, i++) + binaryNo;
        n = n >> 1;
    }
    return binaryNo;
}

int main()
{
    int n;
    cin >> n;
    
    //int binary = decimalToBinaryMethod1(n);
    int binary = decimalToBinaryMethod2(n);

    cout << binary;

    return 0;
}
