/* 
 * File:   main.cpp
 * Author: Zachery Matteson
 * Purpose: to test out win, lose, and roll again outcomes
 * Created on July 7, 2015, 12:56 PM
 */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function 
unsigned char roll(unsigned char, unsigned char);

int main(int argc, char** argv) {
    
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables
    unsigned int nGames = 36000;
    unsigned int win = 0, lose = 0, plyAgn = 0;
    unsigned int chkSum = 0;
    
    //Play the game
    for(int game = 1; game <= nGames; game++) {
        int sum = roll(6,2);
        switch(sum) {
            case 1 : plyAgn++; break;
            case 2 : 
            case 3 : lose++; break;
            case 4 : 
            case 5 : 
            case 6 : plyAgn++; break;
            case 7 : win++; break;
            case 8 : 
            case 9 : 
            case 10 : plyAgn++; break;
            case 11 : win++; break;
            case 12 : lose++; break;
            default : cout<<"Not Possible!"<<endl;
            
        }
    }
    
    //Calculate the total of all the sides
    chkSum = win + lose + plyAgn;
    
    //Display the results
    cout<<"Out of "<<nGames<<" we win "<<setw(5)<<win<<" times"<<endl;
    cout<<"Out of "<<nGames<<" we lose "<<setw(5)<<lose<<" times"<<endl;
    cout<<"Out of "<<nGames<<" we roll again "<<setw(5)<<plyAgn<<" times"<<endl;
    cout<<"Check sum = "<<chkSum<<endl;
    
    //Exit
    return 0;
}

/**********************************************************************
 ***************** roll ***********************************************
 **********************************************************************
 * Purpose: Random throw of any number of dice
 * Inputs
 *      sides -> Number of sides to the dice
 *      nDie  -> NUmber of dice to throw
 * Output
 *      sum   -> Sum of all the dice throws
 *********************************************************************/

unsigned char roll(unsigned char sides, unsigned char nDie) {
    
    //Declare the sum of the die rolls
    unsigned char sum = 0;
    
    //Loop for each die
    for(int thrw = 1; thrw <= nDie; thrw++) {
        sum += (rand() % sides + 1);
    }
    return sum;
    
}