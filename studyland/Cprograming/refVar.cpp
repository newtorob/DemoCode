#include <iostream>

using namespace std;


float refVar(float x, float y, float &divide);

int main()
{
    float divide = 0.0;


    float multR = refVar(50.0f, 10.0f, divide);

    cout << multR << endl;


    return 0;
}

float refVar(float x, float y, float &divide) {
    
    divide = x/y;

    return divide;
}