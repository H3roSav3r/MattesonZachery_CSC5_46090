/* 
 * File:   main.cpp
 * Author: Zachery Matteson
 * Purpose: Grade a test
 * Created on July 16, 2015, 12:52 PM
 */

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <cmath>
#include <ctime>

using namespace std;

//User Libraries

//Global Constants

//Function Prototype
void filAray(char [],int);
void prntAry(const char [],int,int);
int grade(char [], char [], char [], int);

    //Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE = 20;
    char qstns[SIZE], answrs[SIZE], rhtwrg[SIZE];
    
    //Initialize the array
    filAray(qstns, SIZE);
    filAray(answrs, SIZE);
    
    //Grade the Test
    int score = grade(qstns, answrs, rhtwrg, SIZE);
     
    //Output the initial array
    cout<<"The Test Questions Solution"<<endl;
    prntAry(qstns, SIZE, 5);
    cout<<"The Test Questions Answers"<<endl;
    prntAry(answrs, SIZE, 5);
    cout<<"The Scores Received"<<endl;
    prntAry(rhtwrg, SIZE, 5);
    cout<<"Your Results were "<<score<<" out of "<<SIZE<<endl;
    
    //Exit
    return 0;
}

/**************************************************
 *                Score the Test                     *
 **************************************************
 * Purpose:  To print an character array with any
 *           number of columns
 * Input:
 *    n-> The size of the array
 *    q -> The question of array
 *    a-> The character Array
 * Output:
 *    c -> The score Array
 *    score -> The total array
 */

int grade(char q[], char a[], char c[], int n){
    //Declare the count/score
    int score = 0;
    
    //Grade each answer
    for(int i = 0; i < n; i++) {
        if(q[i] == a[i]){
            c[i] = 'c';
            score++;
        } else {
            c[i] = 'i';
        }
    }
    //Return the score
    return score;
}

/**************************************************
 *                Print Array                     *
 **************************************************
 * Purpose:  To print an character array with any
 *           number of columns
 * Input:
 *    n-> The size of the array
 *    a-> The character Array
 *    nCols->Number of columns to display the array.
 * Output:
 *    On Screen
 */

void prntAry(const char a[],int n,int nCols){
    //Separate outputs with a line
    cout<<endl;
    //Loop and output every element in the array
    for(int i = 0; i < n; i++){
        cout<<a[i]<<" ";
        //When column is reached go to next line
        if((i % nCols)==(nCols - 1))cout<<endl;
    }
    //Separate outputs with a line
    cout<<endl;
}

/**************************************************
 *                Fill Array                      *
 **************************************************
 * Purpose:  To fill an array with a, b, c, d
 * Input:
 *    n-> The size of the array
 * Input-Output:
 *    a-> The integer Array
 * Output:
 */
void filAray(char a[],int n){
    //Loop on every element and equate to 2 digits
    for(int i = 0; i < n; i++){
        a[i] = rand() % 4 + 97;//[a, b, c, d]
    }
}