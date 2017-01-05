#include <iostream>

using namespace std;

void showValues(int intArray[], int size); //function prototype

int main() {
    const int arrSize = 8;
    int arrColl[arrSize] = {5, 10, 15, 20, 25, 30, 35, 40};

    cout << "The array contains the values\n";
    showValues(arrColl, arrSize);
    return 0;
}

//showValues, this function displays the contents of an integer array
//when passed the arrays address and its size as arguments

void showValues (int num[], int size) {
    for (int index = 0; index < size; index++)
        cout << num[index] << " ";
    cout << endl;
}
