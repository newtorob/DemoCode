#include <iostream>

using namespace std;

// pass by reference example

void increment(int a)
{
    a = a + 1;
    cout << "a in increment " << a << endl;
}

int main()
{
    int q = 5; // here
    increment(q); //does nothing
    cout << "q in main " << q << endl;

    return 0;
}
