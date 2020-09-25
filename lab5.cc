/**
 *        @file: lab5.cc
 *      @author: Eric Peters
 *        @date: September 25, 2020
 *       @brief: Lab 5: Sentinel Loop
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///function prototypes

int main(int argc, char const *argv[])
{

    //variable declaration
    double inputHigh;
    double inputLow;
    double highTemp;
    double lowTemp;

    //variable input
    cout << "Input high and then low temp: ";
    cin >> inputHigh >> inputLow;
    highTemp = inputHigh;
    lowTemp = inputLow;

    //sentinel loop
    while (inputHigh != -100 || inputLow != -100)
    {
        if (inputLow < lowTemp) //set lowest if lower than previous low
        {
            lowTemp = inputLow;
        }
        if (inputHigh > highTemp) //set highest if higher than previous high
        {
            highTemp = inputHigh;
        }
        cout << "Input high and then low temp: ";
        cin >> inputHigh >> inputLow;
    }

    cout << "Highest: " << highTemp << endl;
    cout << "Lowest: " << lowTemp << endl;

    return 0;
} // main