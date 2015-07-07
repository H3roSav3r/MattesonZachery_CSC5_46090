/* 
 * File:   main.cpp
 * Author: Zahcery Matteson
 * Purpose: Get the average of 5 test scores
 * Created on July 7, 2015, 10:10 AM
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
    float test1, test2, test3, test4, test5, ave;
    //Input Values Here
    
    //Process Input Here
    
    //Output Unknowns Here
    cout<<"Enter test score 1 = "<<endl;
    cin>>test1;
    cout<<"Enter test score 2 = "<<endl;
    cin>>test2;
    cout<<"Enter test score 3 = "<<endl;
    cin>>test3;
    cout<<"Enter test score 4 = "<<endl;
    cin>>test4;
    cout<<"Enter test score 5 = "<<endl;
    cin>>test5;
    
    ave = (test1 + test2 + test3 + test4 + test5) / 5;
    
    cout<<"The everage test scores = "<<fixed<<showpoint<<setprecision(1)<<ave<<endl;
    
    //Exit Stage

    return 0;
}


