//Your challenge for today is to create a program which is password protected, and wont open unless the correct user and password is given. 
//
//
//
#include <iostream>
#include <string>
using std::string;
using std::endl;
using std::cout;
using std::cin;

int main()
{
	string password;
	string usrTry;
	int tries, count;

	count = 0;

	//bool success;
	password = "applesauce";
	cout << "How many times would you like to try?" << endl;
	cin >> tries;
	
	cout << "To access this program you must enter the password, without it, there is no entry!!" << endl;
	
	while(count < tries)
	{

		cin >> usrTry;

		if (usrTry == password)
		{
			cout << "congrats!! You are in" << endl;
			cout << "lol there's nothing here though... " << endl;

		}
		else if (usrTry != password) {
			cout << "nah, you didn't get it, try again " << endl;
			
		}

		count++;



		
	}	

	return 0;

}
