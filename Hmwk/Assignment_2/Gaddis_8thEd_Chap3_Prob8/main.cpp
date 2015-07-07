/* 
 * File:   main.cpp
 * Author: Zachery Matteson
 * Purpose: find out how many widgets there are based on pallet weight
 * Created on July 7, 2015, 11:07 AM
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
    float pal, totpal, wid = 12.5f, nwid;
    
    //Input Values Here
    
    //Process Input Here
    
    //Output Unknowns Here
    cout<<"Enter how much the pallet weighs by itself = "<<endl;
    cin>>pal;
    cout<<"Enter how much the pallet weighs with widgets on = "<<endl;
    cin>>totpal;
    
    nwid = (totpal - pal) / wid;
    
    cout<<"The number of widgets on the pallet are = "<<nwid<<endl;
    
    //Exit Stage

    return 0;
}
