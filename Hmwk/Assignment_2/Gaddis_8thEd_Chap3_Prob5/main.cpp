/* 
 * File:   main.cpp
 * Author: Zachery Matteson
 * Purpose: male and female percentages of a class
 * Created on July 7, 2015, 10:31 AM
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
    float male, fmale, tot, percm, percf;
    
    //Input Values Here
    
    //Process Input Here
    
    //Output Unknowns Here
    cout<<"Enter number of males in the class = "<<endl;
    cin>>male;
    cout<<"Enter number of females in the class = "<<endl;
    cin>>fmale;
    
    tot = male + fmale;
    percm = (male / tot) * 100;
    percf = (fmale / tot) * 100;
    
    cout<<"There are "<<tot<<" students in the class"<<endl;
    cout<<"The percent of males in the class is = "<<percm<<"%"<<endl;
    cout<<"The percent of females in the class is = "<<percf<<"%"<<endl;
    
    //Exit Stage

    return 0;
}

