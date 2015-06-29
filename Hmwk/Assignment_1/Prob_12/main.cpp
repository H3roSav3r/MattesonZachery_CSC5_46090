/* 
 * File:   main.cpp
 * Author: Zachery Matteson
 * Purpose: Homework
 * Created on June 29, 2015, 7:56 AM
 */

//System Libraries
#include <iostream> std; //File I/O

using namespace std; //std namespace -> iostream

//User Libraries

//Global Constants

//Execution Begins Here

int main(int argc, char** argv) {
    
    //Declare Variable Here
    float numFt = 391876; //number of square feet
    float ftpa = 43560; //square feed per acre
    float acre; //number of acres
    
    //Input Values Here
    
    //Process Input Here
    acre = numFt / ftpa; //equation to get acre per square feet
    
    //Output Unknowns Here
    cout<<"The number of acres = "<<acre<<endl;
    
    //Exit Stage

    return 0;
}

