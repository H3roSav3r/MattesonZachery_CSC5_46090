/* 
 * File:   main.cpp
 * Author: Zachery Matteson
 * Purpose: Homework
 * Created on June 29, 2015, 7:27 AM
 */

//System Libraries
#include <iostream> std; //File I/O

using namespace std; //std namespace -> iostream

//User Libraries

//Global Constants

//Execution Begins Here

int main(int argc, char** argv) {
    
    //Declare Variable Here
    float itm1 = 15.95f; //price of item
    float itm2 = 24.95f; //price of item
    float itm3 = 6.95f; //price of item
    float itm4 = 12.95f; //price of item
    float itm5 = 3.95f; //price of item
    float tax = 0.07; //7% is the tax rate
    float subTol; //sub total
    float amST; //amount of sales tax
    float total; //the total amount
    
    //Input Values Here
    
    //Process Input Here
    subTol = itm1 + itm2 + itm3 + itm4 + itm5;
    total = subTol * (1 + tax);
    amST = total - subTol;
    
    //Output Unknowns Here
    cout<<"The sub total = $"<<subTol<<endl;
    cout<<"The amount of sales tax = $"<<amST<<endl;
    cout<<"The total = $"<<total<<endl;
    
    //Exit Stage

    return 0;
}

