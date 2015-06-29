/* 
 * File:   main.cpp
 * Author: Zachery Matteson
 * Purpose: Homework
 * Created on June 29, 2015, 6:55 AM
 */

//System Libraries
#include <iostream> std; //File I/O

using namespace std; //std namespace -> iostream

//User Libraries

//Global Constants

//Execution Begins Here

int main(int argc, char** argv) {
    
    //Declare Variable Here
    float sales = 8.6f; //8.6mil in sales
    float perc = 0.58f; //company gets 58% of sales
    float total; //the total amount the company gets in the end
    
    //Input Values Here
    
    //Process Input Here
    total = sales * perc; //equation to find the total
    
    //Output Unknowns Here
    cout<<"The amount the company gets = $"<<total<<" mil"<<endl;
    
    //Exit Stage

    return 0;
}

