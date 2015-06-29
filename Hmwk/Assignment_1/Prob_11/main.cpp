/* 
 * File:   main.cpp
 * Author: Zachery Matteson
 * Purpose: Homework
 * Created on June 29, 2015, 7:46 AM
 */

//System Libraries
#include <iostream> std; //File I/O

using namespace std; //std namespace -> iostream

//User Libraries

//Global Constants

//Execution Begins Here

int main(int argc, char** argv) {
    
    //Declare Variable Here
    int gal = 20; //number of gallons the car has
    float mpgT = 23.5f; //Miles Per Gallon in town
    float mpgH = 28.9f; //Miles Per Gallon on the highway
    int dstT; //distance for town on 1 tank of gas
    int dstH; //distance for highway on 1 tank of gas
    
    //Input Values Here
    
    //Process Input Here
    dstT = mpgT * gal;
    dstH = mpgH * gal;
    
    //Output Unknowns Here
    cout<<"The distance the car can go while driving in town = "<<dstT<<" miles"<<endl;
    cout<<"The distance the car can go while driving on the highway = "<<dstH<<" miles"<<endl;
    
    //Exit Stage

    return 0;
}

