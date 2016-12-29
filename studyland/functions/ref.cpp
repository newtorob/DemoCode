#include <iostream>
using namespace std;


double exVar(double &refVar);

int main() {

  double refVar = 40;
  double choice;

  choice = exVar(refVar);

  cout << "result" << choice << endl;

  return 0;

}


double exVar(double &refVar)
{

  refVar = refVar * 2;

  return refVar;
}
