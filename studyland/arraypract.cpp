#include <iostream>

using namespace std;

int main() {

    string name, name_ofCompany;
    int rate_ofpay, num_ofEmployees;
    int hours[6];



    cout << "Hello, thank you for dropping by, we need you to fill out some info" << endl;
    cout << "First, state your name for the record please." << endl;

    cin >> name;

    cout << "Good, thank you "<< name << " now, please enter the name of your company" << endl;
    cin >> name_ofCompany;
    cout << "and the rate of pay for your employees" << endl;
    cin >> rate_ofpay;

    cout << "I want to make sure I have it correct, you pay your employees " << rate_ofpay << "an hour in US dollars correct?" << endl;

    cout << "Ok, wonderful, now how many employees do you have?" << endl;
    cin >> num_ofEmployees;

    cout << "Again, to make sure, you currently employ, " << num_ofEmployees << endl;

    cout << "Please enter the number of hours each employee worked." << endl;
    cin >> hours[0];
    cin >> hours[1];
    cin >> hours[2];
    cin >> hours[3];
    cin >> hours[4];
    cin >> hours[5];

    cout << "Thank you for your cooperation" << endl;

    cout << "Does this look correct?" <<endl;

    cout << hours[0] * rate_ofpay << endl;
    cout << hours[1] * rate_ofpay << endl;
    cout << hours[2] * rate_ofpay << endl;
    cout << hours[3] * rate_ofpay << endl;
    cout << hours[4] * rate_ofpay << endl;
    cout << hours[5] * rate_ofpay << endl;

    cout << "if not, please contact administration..." << endl;

    return 0;

}
