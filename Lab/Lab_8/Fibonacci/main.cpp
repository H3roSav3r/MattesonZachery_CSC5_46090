/* 
 * File:   main.cpp
 * Author: Zachery Matteson
 *
 * Created on July 2, 2015, 11:03 AM
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std; //std namespace -> iostream

//User Libraries

//Global Constants

//Execution Begins Here

int main(int argc, char** argv) {
    
    //Declare and initialize members of the sequence
    unsigned short fi = 1, fip1 = 1, fip2;
    unsigned char terms = 10;
    
    //Print the initial conditions
    cout<<"The number of terms in the Fibonacci sequence to display is "<<terms<<endl;
    cout<<"Term "<<1<<" in the sequence = "<<fi<<endl;
    cout<<"Term "<<2<<" in the sequence = "<<fip1<<endl;
    
    //Loop and show terms as you generate
    for(unsigned char term = 3; term <= terms; term++) {
        
        //Calculate the next term in the sequence
        fip2 = fi + fip1;
        
        //Output the current term
        cout<<"Term "<<static_cast<int>(term)<<" in the sequence = "<<fip2<<endl;
        
        //Now shift
        fi = fip1;
        fip1 = fip2;
    }
    
    //Exit
    return 0;
}