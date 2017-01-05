#include <iostream>
using namespace std;

int main()
{
  int usrNum, usrGuess, count;

  count = 0;
  cout << "Enter the number for the player to guess." << endl;
  cin >> usrNum;

  cout << "Enter your guess. " << endl;


  while (usrNum != usrGuess)
  {
    cin >> usrGuess;

    if (usrGuess < usrNum) {
      cout << "Too Low - try again!" << endl;
    }
    else if (usrGuess > usrNum ){
      cout << "Too High - try again!" << endl;
    }
    count++;
  }
  cout << "You guessed it in " << count << " tries!" << endl;

  return 0;
}
