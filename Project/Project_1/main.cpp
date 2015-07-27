/* 
 * File:   main.cpp
 * Author: Zachery Matteson
 * Purpose: Create a game like D&D
 * Created on July 15, 2015, 10:03 AM
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
unsigned char roll(unsigned char,unsigned char);
unsigned char roll2(unsigned char,unsigned char);
void hp(unsigned int&, unsigned int&);

//Execution
int main(int argc, char** argv) {
    
    //Random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    int armr = roll(20,1); //Roll for armor
    int dmg = roll2(20,1); //Roll for damage (ai and player)
    unsigned int pHp = 30; //The players hit points
    unsigned int aiHp = 50; //The bosses hit points
    string chrtr, name; //What type of character the player wants to play as
    
    //Output the results 
    cout << "Hello welcome to the game of Dungeon and Dragons." << endl;
    cout << "You will roll each turn to see if you beat the bosses armor." << endl;
    cout << "If you roll higher then the bosses armor you get to roll for damage";
    cout << " to the boss " << endl;
    cout << "If your armor roll was lower than the bosses armor, he will roll";
    cout << " damage towards you." << endl;
    cout << " Good Luck and Have Fun :)" << endl;
    cout << "Enter the name of your character: ";
    cin >> name;
    cout << "Type in what type of class you would like to be: " << endl;
    cout << "(Warrior, Thief, Mage, Tank) ";
    cin >> chrtr;
    cout << "May the fight begin!" << endl;
    
    //Process the inputs
    hp(pHp, aiHp);
    
    //Exit
    return 0;
}

/**********************************************************
***********************  HP Counter ***********************
*********************************************************** 
 * Purpose:  Keep track of Players and AI Hp
 * Inputs 
 *      pHp -> Player Hp before roll
 *      aiHp -> AI Hp before roll
 * Output
 *      pHp   -> Players Hp
 *      aiHp   -> AI Hp
**********************************************************/

void hp(unsigned int &pHp,unsigned int &aiHp) {
    char choice;
    do{
        unsigned int pDmg = roll2(20,1);
        unsigned int aiDmg = roll2(10,1);
        unsigned int armr = roll(20,1);
        unsigned int aiArmr = 13;
        
        cout << "--------------------------------------------------------------" << endl;
        cout << "You rolled a " << armr << " against the bosses armor!"<< endl;
        
        if(armr < aiArmr) {
            cout << "The boss did " << aiDmg << " damage to you!" << endl;
            pHp = pHp - aiDmg;
            cout << "Your health is at = " << pHp << endl;
            cout << "The bosses health is at = " << aiHp << endl;
            
        } else if (armr >= aiArmr) {
            cout << "You did " << pDmg << " to the boss!" << endl;
            aiHp = aiHp - pDmg;
            cout << "Your health is at = " << pHp << endl;
            cout << "The bosses health is at = " << aiHp << endl;
            
        }
            if(pHp > 4e5) {
                pHp = 0;
                cout << "You Lose!" << endl;
                break;
            } else if (aiHp > 4e5) {
                aiHp = 0;
                cout << "You Win!" << endl;
                break;
            } 
            cout << "The battle must continue! Keep fighting? (Y or N) \n";
        cin >> choice;
    }while(choice == 'y' || choice == 'Y');
}

/**********************************************************
****************  Damage Roll  ****************************
*********************************************************** 
 * Purpose:  Random throw of any number of dice
 * Inputs 
 *      sides -> Number of sides to the dice
 *      nDie  -> Number of dice to throw
 * Output
 *      sum   -> Sum of all the dice throws
**********************************************************/

unsigned char roll2(unsigned char sides,unsigned char nDie){
    
    //Declare the sum the die rolls
    unsigned char sum=0;
    
    //Loop for each die
    for(int thrw = 1; thrw <= nDie; thrw++){
        sum += (rand() % sides + 1);
        
    }
    return sum;
    
}

/**********************************************************
***********************  roll  ****************************
*********************************************************** 
 * Purpose:  Random throw of any number of dice
 * Inputs 
 *      sides -> Number of sides to the dice
 *      nDie  -> Number of dice to throw
 * Output
 *      sum   -> Sum of all the dice throws
**********************************************************/

unsigned char roll(unsigned char sides,unsigned char nDie){
    
    //Declare the sum the die rolls
    unsigned char sum=0;
    
    //Loop for each die
    for(int thrw = 1; thrw <= nDie; thrw++){
        sum += (rand() % sides + 1);
        
    }
    return sum;
    
}