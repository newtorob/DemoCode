//program that simply asks user for ints, then produces the max and min

#include <iostream>

using namespace std;

int main()
{
  int usrNum;
  int tempNum, min, max;

  cout << "Hello, How many integers would you like to enter?" << endl;
  cin >> usrNum;

  cout << "Great, now please enter " << usrNum <<" integers." << endl;

  for (int i = 0; usrNum > i; i++)
  {
    cin >> tempNum;

    if (tempNum < min) {
      min = tempNum;
    }
    else if (tempNum > max) {
      max = tempNum;
    }
  }

  cout << "max " << max << endl;
  cout << "min " << min << endl;
  return 0;
}
