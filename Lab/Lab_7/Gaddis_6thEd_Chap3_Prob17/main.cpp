/* 
 * File:   main.cpp
 * Author: Zachery Matteson
 * Purpose: Work
 * Created on July 1, 2015, 11:02 AM
 */

//System Libraries
#include <iostream>
#include <iomanip>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins
int main(int argc, char** argv) {
    //Declare Variables
    unsigned char nMonths = 36; //Number of months to pay loan
    unsigned short loan = 10000; //Loan Amount in $'s
    float ir = 0.01f; //Interest rate per month
    float mnthPay; //Monthly Payment in $'s
    float temp = 1.0f; //Intermediate value found in monthly payment equation
    float cstLoan; //Cost of the loan in $'s
    float totCost; //Total paid back to lender
    
    //Calculate the intermediate value
    float onePlsi = (1 + ir);
    for(int months = 1; months <= nMonths; months++) {
        temp *= onePlsi;
    }
    
    //Calculate the monthly payment
    mnthPay = ir * temp * loan / (temp -1);
    mnthPay = static_cast<int>(mnthPay * 100) / 100.0f;
    totCost = nMonths * mnthPay;
    cstLoan = totCost - loan;
    
    //Output the results
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout<<"Loan Amount :         $"<<setw(8)<<loan<<endl;
    cout<<"Monthly Interest Rate: "<<setw(8)<<ir * 100<<"%"<<endl;
    cout<<"Number of Payments:    "<<setw(8)<<static_cast<int>(nMonths)<<endl;
    cout<<"Monthly Payment       $"<<setw(8)<<mnthPay<<endl;      
    cout<<"Amount Paid Back:     $"<<setw(8)<<totCost<<endl;
    cout<<"Interest Paid:        $"<<setw(8)<<cstLoan<<endl;
    
    //Exit

    return 0;
}

