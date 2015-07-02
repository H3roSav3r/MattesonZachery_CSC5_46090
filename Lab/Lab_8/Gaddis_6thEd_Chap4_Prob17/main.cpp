/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on July 2, 2015, 1:24 PM
 */

//System Libraries
#include <iostream> std; //File I/O
 
using namespace std; //std namespace -> iostream
 
//User Libraries
 
//Global Constants
 
//Execution Begins Here
 
int main(int argc, char** argv) {
 
    //Declare Variable Here
    int nSec;
    int yrs, mnths, weeks, days, hrs, min, secs;
    
    //Prompt user for the number of seconds
    cout<<"Input number of seconds to calculate"<<endl;
    cin>>nSec;
    cout<<"The number of seconds to convert = "<<nSec<<"(secs)"<<endl;
    
    //Calculate the values
    secs = nSec % 60;
    nSec /= 60;
    min = nSec % 60;
    nSec /= 60;
    hrs = nSec % 24;
    nSec /= 24;
    days = nSec % 7;
    nSec /= 7;
    weeks = nSec % 4;
    nSec /= 4;
    mnths = nSec % 12;
    yrs = nSec / 12;
    
    //Output the results
    cout<<"The number of years   = "<<yrs<<endl;
    cout<<"The number of months   = "<<yrs<<endl;
    cout<<"The number of weeks   = "<<yrs<<endl;
    cout<<"The number of days   = "<<yrs<<endl;
    cout<<"The number of hours   = "<<yrs<<endl;
    cout<<"The number of minutes   = "<<yrs<<endl;
    cout<<"The number of seconds   = "<<yrs<<endl;
    
    //Check result
    cout<<endl<<"As a check = ";
    //cout<<((((((yrs * 12 + mnths) * 4 + weeks) * 7 + days) * 24 + hrs) * 60 mins) * 60 +secs);
    
    //Exit Stage
 
    return 0;
}