#include <iostream>

using namespace std;

int main(){
    
    double a, b, c, d, e;
    double avg;
    
    cout << "Please enter 5 numbers: " << endl;
    cin >> a >> b >> c >> d >> e;

    avg = (a+b+c+d+e)/5;

    cout << "The avg of those numbers is: " << endl;
    cout << avg;

    return 0;

}