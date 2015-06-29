/* 
 * File:   main.cpp
 * Author: Zachery Matteson
 * Purpose: homework
 * Created on June 29, 2015, 7:09 AM
 */

//System Libraries
#include <iostream> std; //File I/O

using namespace std; //std namespace -> iostream

//User Libraries

//Global Constants

//Execution Begins Here

int main(int argc, char** argv) {
    
    //Declare Variable Here
    float payAmo = 2200; //the pay amount is $2200
    float payPer = 26; //the pay period which is every other week for a year which is 26 times
    float annPay; //the annual pay
    
    //Input Values Here
    
    //Process Input Here
    annPay = payAmo * payPer;
    
    //Output Unknowns Here
    cout<<"The total annual pay = $"<<annPay<<endl;
    
    //Exit Stage

    return 0;
}


