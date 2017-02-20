#include <climits>
#include <cfloat>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int maxInt = INT_MAX;
    int biggerThanMax = maxInt * 2;

    cout << "maxInt: " << maxInt << endl;
    cout << "biggerThanMax: " << biggerThanMax << endl;

    double closesttoZeroDouble = DBL_MIN;
    double tooCloseToZeroDouble = closestToZeroDouble / 10.0;

    cout << endl;
    cout << setprecision(30);

    cout << "closestToZeroDouble: " << closestToZeroDouble << endl;
    cout << "tooCloseToZeroDouble: " << tooCloseToZeroDouble << endl;

    return 0;
}