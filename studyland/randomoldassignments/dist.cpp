#include <iostream>
#include <cmath>

using std::endl;
using std::cin;
using std::cout;

double fallDistance(double time);

int main()
{

    double time;

    cout << "Enter your falling time please" << endl;
    cin >> time;

    
    fallDistance(time);

    cout << fallDistance(time);

    return 0;
}

double fallDistance(double time)
{
    double g,t,d;

    g = 9.8;
    t = time;

    d = (0.5 * g *(pow (t, 2)));

    return d;
}
