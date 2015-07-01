/* 
 * File:   main.cpp
 * Author: Zachery Matteson
 * Purpose: Show Pie
 * Created on July 1, 2015, 12:28 PM
 */

//System Libraries
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

//User Libraries

//Global Constants
const float PI = 4 * atan(1);

//Function Prototypes

//Execution Begins
int main(int argc, char** argv) {
    
    //Declare and initialize variables
    int nTerms = 200000000;
    double apprxPI = 1;
    
    //Now calculate PI with a for-loop
    for(int i = 3, nTerm = 1; nTerm <= nTerms; i += 4, nTerm += 2) {
        apprxPI += (-1.0f / i + 1.0f /(i + 2));
    }
    apprxPI *= 4;
    
    //Output the results and compare
    cout<<fixed<<showpoint<<setprecision(15);
    cout<<"Exact Value of PI = "<<PI<<endl;
    cout<<"The approximate values of PI = "<<apprxPI<<endl;
    
    //Exit
    return 0;
}

