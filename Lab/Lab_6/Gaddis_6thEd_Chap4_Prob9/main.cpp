/* 
 * File:   main.cpp
 * Author: Zachery Matteson
 * Purpose: lab
 * Created on June 30, 2015, 12:58 PM
 */

//System Libraries
#include <fstream>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution

int main(int argc, char** argv) {
    
    //Set the random see
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables
    unsigned short op1, op2, result, answer;
    char op;
    bool doAgain;
    
    //Loop based upon continuing to play with the math tutor
    do{
        //Determine op1 / op2
        op1 = rand() % 900 + 100; //[100-999]
        op2 = rand() % 900 + 100; //[100-999]
        op = rand() % 5;
        
        //Display the problem
        cout<<setw(6)<<op1<<endl;
        switch(op){
            case 0 : {
                cout<<" + "<<op2<<endl; 
                answer = op1 + op2;
                break;
            }
            case 1 : {
                cout<<" - "<<op2<<endl; 
                answer = op1 - op2;
                break;
            }
            case 2 : {
                cout<<" * "<<op2<<endl; 
                answer = op1 * op2;
                break;
            }
            case 3 : {
                cout<<" / "<<op2<<endl; 
                answer = op1 / op2;
                break;
            }
            case 4 : {
                cout<<" % "<<op2<<endl; 
                answer = op1 % op2;
                break;
            }
        }
        
        cout<<"------"<<endl;
        
        //Input the value for the sum
        cin>>result;
        
        //If correct output Congratulations else try again?
        if(result == answer) {
            cout<<"Congratulations!"<<endl;
        }
        else {
            cout<<"Wrong Answer!"<<endl;
            cout<<"The right answer was = "<<answer<<endl;
        }
        
        //Prompt if they would like to continue
        cout<<"Would you like to continue? y/n"<<endl;
        char response;
        cin>>response;
        if(response == 'y')doAgain = true;
        else doAgain = false;
        
    }
    while(doAgain);
    
    //Exit
    return 0;
}
