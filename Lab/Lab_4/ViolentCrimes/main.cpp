/* 
 * File:   main.cpp
 * Author: Zachery Matteson
 * Purpose: 
 * Created on June 25, 2015, 12:25 PM
 */

//System Libraries
#include <iostream> //File I/O 
#include <iomanip> 
using namespace std; //std namespace -> iostream

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
    
    //Declare Variable Here
    float usVc = 11.88e6f; //Population in the US
    float ukVc = 6.52e6f; //Population in the UK
    float usPop = 318e6f; //Violent Crimes in the US
    float ukPop = 64.1e6f; //Violent Crimes in the UK
    float vcPus; //Percentage of Violent Crimes in US
    float vcPuk; //Percentage of Violent Crimes in UK
    
    //Input Values Here
    
    //Process Input Here
    vcPus = (usVc / usPop) * 100; //Calculate % of violent crimes in US
    vcPuk = (ukVc / ukPop) * 100; //Calculate % of violent crimes in UK
    
    //Output Unknowns Here
    cout << "Percentage of violent crimes in the United States = " << fixed << showpoint << setprecision(2) << vcPus << "%" << endl;
    cout << "Percentage of violent crimes in the United Kingdom = " << vcPuk << "%" << endl;
    //ExitStage Right!
    return 0;
}