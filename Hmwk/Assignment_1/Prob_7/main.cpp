/* 
 * File:   main.cpp
 * Author: Zachery Matteson
 * Purpose: Homework
 * Created on June 29, 2015, 7:17 AM
 */

//System Libraries
#include <iostream> std; //File I/O

using namespace std; //std namespace -> iostream

//User Libraries

//Global Constants

//Execution Begins Here

int main(int argc, char** argv) {
    
    //Declare Variable Here
    float rate = 1.5f; //the rate of the sea level rising each year 1.5 millimeters
    float yr5 = 5f; //number of years after
    float yr7 = 7f; //number of years after
    float yr10 = 10f; //number of years after
    float tol5; //total in number of years
    float tol7; //total in number of years
    float tol10; //total in number of years
    
    //Input Values Here
    
    //Process Input Here
    tol5 = yr5 * rate;
    tol7 = yr7 * rate;
    tol10 = yr10 * rate;
    
    //Output Unknowns Here
    cout<<"The see level will rise "<<tol5<<" millimeters in "<<yr5<<" years"<<endl;
    cout<<"The see level will rise "<<tol7<<" millimeters in "<<yr7<<" years"<<endl;
    cout<<"The see level will rise "<<tol10<<" millimeters in "<<yr10<<" years"<<endl;
    
    //Exit Stage

    return 0;
}

