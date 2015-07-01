/* 
 * File:   main.cpp
 * Author: Zachery Matteson
 * Purpose: Homework
 * Created on July 1, 2015, 1:12 PM
 */

//System Libraries
#include <iostream> std; //File I/O

using namespace std; //std namespace -> iostream

//User Libraries

//Global Constants

//Execution Begins Here

int main(int argc, char** argv) {
    
    //Declare Variable Here
    float gal; //Gallons car and hold
    float miles; //Miles car can go on one tank
    float mpg; //Miles Per Gallon
    
    //Input Values Here
    
    //Process Input Here
    
    //Output Unknowns Here
    cout<<"Enter number of gallons car can hold = "<<endl;
    cin>>gal;
    cout<<"Enter number of miles car can be driven on one tank of gas = "<<endl;
    cin>>miles;
    mpg = miles / gal;
    cout<<"Mile Per Gallon your car should have is = "<<mpg<<endl;
    
    //Exit Stage

    return 0;
}

