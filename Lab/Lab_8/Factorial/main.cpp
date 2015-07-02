/* 
 * File:   main.cpp
 * Author: Zachery Matteson
 * Purpose: Calculate the factorial
 * Created on July 2, 2015, 12:09 PM
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std; //std namespace -> iostream

//User Libraries

//Global Constants

//Execution Begins Here

int main(int argc, char** argv) {
    
    //Declare our variables
    float fact = 1;
    unsigned char n = 6;
    
    //Loop and find the n!
    for(int i = 1; i <= n; i++) {
        fact *= i;
    }
    
    //Output the result
    cout<<static_cast<int>(n)<<"!="<<fact<<endl;
    
    //Exit
    return 0;
}

