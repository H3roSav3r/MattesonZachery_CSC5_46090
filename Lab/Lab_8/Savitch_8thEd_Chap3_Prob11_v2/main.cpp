/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on July 2, 2015, 12:40 PM
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std; //std namespace -> iostream

//User Libraries

//Global Constants

//Execution Begins Here

int main(int argc, char** argv) {
    
    //Declare our variables
    float x = 2.0f;
    float ex = 1.0f;
    float delt = 1.0f;
    float tol = 1e-7;
    
    //Utilize a for-loop to calculate e^x
    //for(int term = 1;delt <-tol||delt>tol;delt *= x / term, ex += delt, term++) {}
    for(int term = 1;delt <-tol||delt>tol; term++) {
        delt *= x / term;
        ex += delt;
        }
    
    //Output the result
    cout<<fixed<<showpoint<<setprecision(15)<<endl;
    cout<<"Exact e("<<x<<")="<<exp(x)<<endl;
    cout<<"Approx e("<<x<<")="<<ex<<endl;
    
    //Exit
    return 0;
}

