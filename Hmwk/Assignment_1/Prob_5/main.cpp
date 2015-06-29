/* 
 * File:   main.cpp
 * Author: Zachery Matteson
 * Purpose: Homework
 * Created on June 29, 2015, 7:02 AM
 */

//System Libraries
#include <iostream> std; //File I/O

using namespace std; //std namespace -> iostream

//User Libraries

//Global Constants

//Execution Begins Here

int main(int argc, char** argv) {
    
    //Declare Variable Here
    
    //Input Values Here
    int num1 = 28;
    int num2 = 32;
    int num3 = 37;
    int num4 = 24;
    int num5 = 33;
    int sum; //the sum of all the numbers
    int ave; //the average of all the numbers
    
    //Process Input Here
    sum = num1 + num2 + num3 + num4 + num5;
    ave = sum / 5;
    
    //Output Unknowns Here
    cout<<"The average = "<<ave<<endl;
    
    //Exit Stage

    return 0;
}


