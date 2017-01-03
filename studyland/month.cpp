#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

//this program uses an array to store monthly sales figures
//for a company's regional offices. It then finds and displays
//the total, average, highest, and the lowest sales  amounts.
//the data to fill the array is read in from a file.


int main()
{
    const int office_num = 12;
    ifstream infoin;
    int theOffice;

    double sales_ofOffice[office_num],
        saleTotal = 0.0,
        saleAvg,
        highSale,
        lowSale;

    infoin.open("sales_ofOffice");
    if (!infoin)
        cout << "Error opening the info file. \n";
    else
    {
        //fill the array with data from the file
        for (theOffice = 0; theOffice < office_num; theOffice++)
            infoin >> sales_ofOffice[theOffice];
        infoin.close();

        //sum all the array elements
        for (theOffice = 0; theOffice < office_num; theOffice++)
            saleTotal += sales_ofOffice[theOffice];
        //calculate average sales
        saleAvg = saleTotal / office_num;

        //find highest and lowest sales amounts
        highSale = lowSale = sales_ofOffice[0];

        for(theOffice = 1; theOffice < office_num; theOffice++)
        {
            if (sales_ofOffice[theOffice] > highSale)
                highSale = sales_ofOffice[theOffice];
            else if 
        }

    }
}
