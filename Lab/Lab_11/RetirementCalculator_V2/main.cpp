/* 
 * File:   main.cpp
 * Author: Zachery Matteson
 * Purpose: Retirement Calculator
 * Created on July 8, 2015, 11:25 AM
 */

//System Library
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution
int main(int argc, char** argv) {
    
    //Declare Variables
    float salary = 100000; //Average Salary in $'s
    float invRate = 0.06f; //Investment Rate -> see Cali Muni Bonds
    float savReq; //Savings required at retirement
    float pDep = 0.20f; //Of your gross salary -> Percentage Deposited
    float deposit; //Yearly deposit in $'s
    float savings = 0; //Initial Savings at start of Employment
    float year = 0; //Start at year 0
    float date = 2018;
    float inter;
    
    //Calculate required savings
    savReq = salary / invRate;
    
    //Display the results
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"Year         Date            Savings           Interest              Deposit"<<endl;
    
    //Loop to calculate when Retirement is possible
    do {
        deposit = pDep * salary; //Deposit based on salary
        savings *= (1 + invRate); //earning based upon investment rate
        savings += deposit; //Add the deposit after earning interest
        year++;
        date++;
        inter = savings * invRate;
        cout<<static_cast<int>(year)<<"         07/08/"<<static_cast<int>(date)<<setw(10)<<"            "<<savings<<"            "<<inter<<"            "<<deposit<<endl;
        
    }
    while(savings < savReq); //When we have enough to retire then exit the loop
    
    //Display the results
    cout<<fixed<<showpoint<<setprecision(2);
    
    //Exit
    return 0;
}

