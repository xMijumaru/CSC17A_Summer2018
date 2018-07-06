/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: kevr1
 *
 * Created on June 19, 2018, 10:22 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//function prototypes
int main(int argc, char** argv) {
//Declare the variables here
    float buggy;//The user will input the initial population that will see an 
    //increase
    float biggy; //The percentage growth of the population 
    int oldie;//This part will calculate how many days will the growth take 
    //place
    float saturn; //this variable will display the new population after every
    //calculation has been done;
    
    //Display inputs and outputs
    cout << "This program calculates the increasing growth of organisms" << endl;
    cout << "Enter the initial population size of the current organism: ";
    cin >> buggy;
    while (buggy<=0){
        cout << "Invalid entry, please enter another number: ";
        cin >> buggy;
    }
    cout << "Enter the population growth in percentages: ";
    cin >> biggy;
    while (biggy<=0){
        cout << "Invalid entry, please enter another number: ";
        cin >> biggy;
    }
    
    cout << "Enter the number of days that the population will increase: ";
    cin >> oldie;
    while (oldie <=1){
        cout << "Input must be greater than or equal to 2, Please"
                << "\n try another number: ";
        cin >> oldie;
    }
    float jupiter = biggy * (1e-2);//The purpose of Jupiter is to read in the 
    //value of the percentage variable, biggy, and convert it into a decimal
    //in order for the program to run its calculations
   
    cout << fixed << showpoint << setprecision (2);
    cout << "Bug Population Increases " << endl;
    
    //Calculation to be solved in this part of the program
    for (int vector =1; vector <=oldie; vector ++){
        saturn=(jupiter*buggy)+buggy;
        cout << "Day " << vector << ": " << saturn << endl;
        buggy=saturn;//In order to add the increase to the next day
    }
    return 0;
}

