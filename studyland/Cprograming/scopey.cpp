#include <iostream>

using namespace std;

double diff(double num1, double num2)
{
    return num1 - num2;
}

int main()
{
    double firstVal = 7.5;
    double secondVal = 3.1;
    double result;

    result = diff(firstVal, secondVal);
    cout << result << endl;

    return 0;
}