/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: kevr1
 *
 * Created on June 19, 2018, 8:18 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
//Write a program that converts the Celsius to Fahrenheit 
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
//Declare the Variables here
    float input; //The Celsius temperature that will be converted into Fahrenheit
    float output; //The outputted value when the function is completed
    
    cout << "This is a Celsius to Fahrenheit conversion program" << endl;
    cout << "Enter the degrees you wish to convert (in Celsius): ";
    cin >> input;
    
    output = (9/5)*(input)+(32);
    cout << fixed << showpoint << setprecision(1);
    cout << "Converted Degrees: " << output << endl; 
    return 0;
}

