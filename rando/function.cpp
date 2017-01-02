#include <iostream>

using namespace std;

int tetu(int age);
int salary (int salary_of_user);

int main()
{
    int ageofuser, sal;

    cout << "Please enter your age and I will double it" << endl;
    cin >> ageofuser;

    cout << "What is your current salary??" << endl;
    cin >> sal;

    cout << "here is your doubled age!" << endl;

    cout << tetu(ageofuser) << endl;

    cout << "Here is your hopefully doubled salary... it won't be... but hopefully it is..." << endl;
    cout << salary(sal) << endl;
   

    return 0;
}

int tetu(int age)
{

    int square;

    square = age * 2;

    return square;
}

int salary(int salary_of_user)
{
    int salary_doubled;

    salary_doubled = salary_of_user * 2;

    return salary_doubled;
}
