/*this is a calculator application that would have some 
 * use in my life
 * this is challenge 2
 * all these challenges are in cpp
 */


//I decided to do celcius to fahrenheit
//because here in the states we aren't
//on the metric system yet
//ugh

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
int convert(int c)
{
	int f;
	f = ((c * 1.8) + 32);

	return f;
}
int main() 
{
	int cel;

	cout << "What is your celcius? " << endl;
	cin >> cel;

	cout << "Your celsius temp converted to fahrenheit is " << convert(cel) << " degrees." <<  endl;;
	
	
	return 0;
}
