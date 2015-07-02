/* 
 * File:   main.cpp
 * Author: Zachery Matteson
 * Purpose: Approximate PI with a dart board
 * Created on July 2, 2015, 10:20 AM
 */

//System Libraries
#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std; //std namespace -> iostream

//User Libraries

//Global Constants
const double PI = 4 * atan (1.0);
const double MXRND = pow(2,31) -1;
//Execution Begins Here

int main(int argc, char** argv) {
    
    //Set the random number see with time
    srand(static_cast<unsigned int>(time(0)));
    
    //Determine the maximum and minimum
    unsigned int max = rand(), min = rand();
    unsigned int nDarts = 1000000000, nDrtInC = 0;
    float apprxPI = 0;
    
    //Loop to fine the min and max
    for(int dart = 1; dart <= nDarts; dart++) {
        float x = rand() / MXRND; //[0, 1]
        float y = rand() / MXRND; //[0, 1]
        if (x * y + y * y <= 1) nDrtInC++;
        
    }
    
    apprxPI = 4.0f * nDrtInC / nDarts;
    
    //Output the results
    cout<<fixed<<showpoint<<setprecision(20);
    cout<<"Exact Value of PI = "<<PI<<endl;
    cout<<"The approximate value of PI = "<<apprxPI<<endl;
    
    //Exit
    return 0;
}
