#include <iostream>

using namespace std;

int main()
{
    long myLongVar = 1000;

    cout << "bytes of short: " << sizeof(short) << endl;
    cout << "bytes of int: " << sizeof(int) << endl;
    cout << "bytes of long: " << sizeof(long) << endl;

    cout << "bytes for myLongVar: " << sizeof(myLongVar) << endl;

    return 0;
}