/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: kevr1
 *
 * Created on June 20, 2018, 9:27 AM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

//To calculate the total food eaten by each monkey

int main(int argc, char** argv) {
//Declare the variables here
    const int mon=3; //The amount of monkeys that will equate to 3
    const int day=5; //The amount of weekdays that the monkeys will eat their food
    //for
    float array[mon][day]; //the array that will keep track
    float mercury; // The smallest planet will keep track of the minimum
    float jupiter; //The largest planet will keep the maximum
    int ave; //The average of the food eaten by the monkeys
    float total; //The total amount of food eaten all the monkeys 
    //Display inputs and outputs
    cout << "This is a Monkey Business Calculator " << endl;
    //reads in the total and the input
    for (int planet=0;planet<mon;planet++){
        for (int space=0; space<day;space++){
            cout << "Enter the amount of food eaten by Monkey " << planet + 1 
                    << " day " << space+1 << ": ";
            cin >> array[planet][space];
            total+=array[planet][space];
        }
    }
    mercury=array[0][0];
    jupiter=array[0][0];
    
   
    for (int a=0; a<mon; a++){//calculates the maximum
            //Set the parameters for the equation
        for (int b=0;b<day;b++){
            if (array[a][b] < mercury)
        { 
	 mercury = array[a][b];
        }
    if (array[a][b] > jupiter)
	{ 
	jupiter = array[a][b];
        }
                
        }
        
        
    }
   
    
    //All needed outputs
    cout << fixed << showpoint << setprecision(2);
    cout << "Total Amount of Food Eaten:   " << total << endl;
    cout << "Average Amount of Food Eaten: " << total/3 << endl;
    cout << "Maximum Amount Eaten:         " << jupiter << endl;
    cout << "Minimum Amount Eaten:         " << mercury << endl;
    return 0;
}

