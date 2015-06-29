/* 
 * File:   main.cpp
 * Author: Zachery Matteson
 * Purpose: Homework
 * Created on June 29, 2015, 7:41 AM
 */

//System Libraries
#include <iostream> std; //File I/O

using namespace std; //std namespace -> iostream

//User Libraries

//Global Constants

//Execution Begins Here

int main(int argc, char** argv) {
    
    //Declare Variable Here
    int gal = 15; //number of gallons the car can hold
    int miles = 375; //number of miles the car can go on 1 tank of gas
    int mpg; //miles per gallon the care will get
    
    //Input Values Here
    
    //Process Input Here
    mpg = miles / gal;
    
    //Output Unknowns Here
    cout<<"The MGP of the car = "<<mpg<<" MPG"<<endl;
    
    //Exit Stage

    return 0;
}

