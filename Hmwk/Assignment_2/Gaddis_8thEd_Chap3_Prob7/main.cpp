/* 
 * File:   main.cpp
 * Author: Zachery Matteson
 * Purpose: calculate how much money the box office will get
 * Created on July 7, 2015, 10:47 AM
 */

//System Libraries
#include <iostream> std; //File I/O
#include <iomanip>

using namespace std; //std namespace -> iostream

//User Libraries

//Global Constants

//Execution Begins Here

int main(int argc, char** argv) {
    
    //Declare Variable Here
    string movie;
    float adt = 10.0f, cht = 6.0f, nadt, ncht, gross, net, aptd;
    
    //Input Values Here
    
    //Process Input Here
    
    //Output Unknowns Here
    cout<<"Enter Name of Movie = "<<endl;
    cin>>movie;
    cout<<"Enter amount of Adult and Child tickets sold = "<<endl;
    cin>>nadt>>ncht;
    
    gross = (nadt * adt) + (ncht * cht);
    net = gross * 0.2;
    aptd = gross - net;
    
    cout<<"Movie name : "<<movie<<endl;
    cout<<"Adult Tickets Sold: "<<nadt<<endl;
    cout<<"Child Tickets Sold: "<<ncht<<endl;
    cout<<"Gross Box Office Profit: $"<<fixed<<showpoint<<setprecision(2)<<gross<<endl;
    cout<<"Net Box Office Profit: $"<<fixed<<showpoint<<setprecision(2)<<net<<endl;
    cout<<"Amount Paid to Distributor: $"<<fixed<<showpoint<<setprecision(2)<<aptd<<endl;
    
    //Exit Stage

    return 0;
}

