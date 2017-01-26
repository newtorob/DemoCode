#include <iostream>

using namespace std;

void smallSort (int& a, int& b, int& c)
{
    if(a > b)
        swap(a, b);
    if (a > c)
        swap(a, c);
    if (b > c)
        swap (b, c);

    
}

int main () 
{
    int a = 14;
    int b = -90;
    int c = 2;

    smallSort(a, b, c);


    cout << a << ", " << b  << ", " << c << endl;

    return 0;
}

