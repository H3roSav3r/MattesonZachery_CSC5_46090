/* 
 * File:   main.cpp
 * Author: Zachery Matteson
 * Purpose: Homework
 * Created on July 1, 2015, 1:29 PM
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
    float numA, numB, numC, totA, totB, totC;
    float classA = 15.0f, classB = 12.0f, classC = 9.0f;
    
    //Input Values Here
    
    //Process Input Here
    totA = numA * classA;
    totB = numB * classB;
    totC = numC * classC;
    
    //Output Unknowns Here
    cout<<"Number of Class A tickets sold = "<<endl;
    cin>>numA;
    cout<<"Number of Class B tickets sold = "<<endl;
    cin>>numB;
    cout<<"Number of Class C tickets sold = "<<endl;
    cin>>numC;
    cout<<"Total"<<endl;
    cout<<"$"<<fixed<<showpoint<<setprecision(2)<<numA * classA<<endl;
    cout<<"$"<<fixed<<showpoint<<setprecision(2)<<numB * classB<<endl;
    cout<<"$"<<fixed<<showpoint<<setprecision(2)<<numC * classC<<endl;
    
    //Exit Stage

    return 0;
}


