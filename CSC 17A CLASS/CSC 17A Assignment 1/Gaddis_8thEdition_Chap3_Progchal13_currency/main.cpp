/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: kevr1
 *
 * Created on June 19, 2018, 8:29 PM
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
//Declare the variables here
    float dollar;
    float Euro=0.74;//The amount of Euros that is equal to the dollar
    float yen=98.93;//the amount of Yen that is equal to the dollar
    
    //Display inputs and outputs here
    cout << "This program converts US Dollars to Euro and Yen" << endl;
    cout << "Enter the amount of Dollars you want to convert: " << endl;
    cin >>dollar;
    float happy=(dollar * Euro);//holds the Euro conversion
    float soft=(dollar * yen);//This holds the value of the Yen
    
    cout << fixed << showpoint << setprecision(2);
    cout << "Euro Conversion: " << happy << endl;
    cout << "Yen Conversion:  " << soft << endl;
    return 0;
}

