#include <iostream>
#include <math.h>
using namespace std;


int main() {

    int centAmount;
    int quarters, dime, nickel, pennies;

    cout << "Please enter an amount in cents less than a dollar." << endl;
    cin >> centAmount;

    quarters = centAmount/25;
    centAmount = centAmount%25;
    dime = centAmount/10;
    centAmount = centAmount%10;
    nickel = centAmount/5;
    centAmount = centAmount % 5;
    pennies = centAmount/1;
    

    

    cout << "Your change will be: " << endl;
    cout <<"q: " <<  quarters << endl << "d: " << dime << endl << "n: " << nickel <<endl << "p: "<< pennies << endl;

    return 0;



}