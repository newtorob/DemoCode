/*this is the challenge
 * create a program that will ask the users name, age, 
 * and reddit username. have it tell them the information back, in the format:
 *
 * your name is (blank), you are (blank) years old, and your username is (blank)
 *
 * for extra credit, have the program log this information in a file to be accessed later.
 *
 */

#include <iostream>
#include <fstream>
using std::endl;
using std::cin;
using std::cout;
using std::ofstream;
using std::ifstream;

int main()
{
	std::string name, userName;
	int age;

	cout << "What is your name?" << endl;
	cin >> name;
	cout << "What is your age?" << endl;
	cin >> age;
	cout << "What is your reddit username?" << endl;
	cin >> userName;

	cout << "Your name is " << name << " you are " << age << " years old, and your username is " << userName << endl;

	ofstream output_file("info_log.txt");
	if(output_file.is_open())
	{
		output_file << "Your name is " << name << " you are " << age << " years old, and your username is " << userName <<endl;
	}
	
	return 0;


}

//compiled and finished, this is challenge #1
