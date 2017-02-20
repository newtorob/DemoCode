#include <iostream>
using namespace std;

int main() 
{
    double celTemp;
    double F;
    int addTemp = 32;

   
    cout << "Please enter a Celsius Temp: " << endl;
    cin >> celTemp;

    F = 1.8 * celTemp + addTemp;

    cout << "The equivalent Fahrenheit Temp is: " << endl;
    cout << F;

    return 0;

}