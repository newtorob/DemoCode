#include <iostream>

using namespace std;

int hailstone(int num)
{

   int count = 0;
   
   while  (num != 1){
    
    if (num % 2 == 0){
        num /= 2;
    }
    else if (num % 2 == 1){
        ((num *= 3) += 1);
    }

    count++;
   }

   cout << "Here are the steps it took to get to 1: " << count << endl;

    return 0;

}

int main() 
{
    int num;

    cout << "Give us a starting number." << endl;
    cin >> num;

    hailstone(num);
    
}