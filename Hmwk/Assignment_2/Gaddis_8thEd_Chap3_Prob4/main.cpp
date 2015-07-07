/* 
 * File:   main.cpp
 * Author: Zachery Matteson
 * Purpose: take the average rainfall for 3 months
 * Created on July 7, 2015, 10:20 AM
 */

//System Libraries
#include <iostream> std; //File I/O
#include <iomanip>

using namespace std; //std namespace -> iostream

//User Libraries

//Global Constants

//Execution Begins Here

int main(int argc, char** argv) {
    
    //Declare Variable Here
    string month1, month2, month3; //name of month
    float rain1, rain2, rain3, ave; //ammount of rain per month in inches
    //Input Values Here
    
    //Process Input Here
    
    //Output Unknowns Here
    cout<<"Enter name of month 1 and amount of rainfall in inches = "<<endl;
    cin>>month1>>rain1;
    cout<<"Enter name of month 2 and amount of rainfall in inches = "<<endl;
    cin>>month2>>rain2;
    cout<<"Enter name of month 3 and amount of rainfall in inches = "<<endl;
    cin>>month3>>rain3;
    
    ave = (rain1 + rain2 + rain3) / 3;
    
    cout<<"The average rainfall for "<<month1<<", "<<month2<<", and "<<month3<<" is "<<fixed<<showpoint<<setprecision(2)<<ave<<" inches."<<endl;
    
    //Exit Stage

    return 0;
}

