/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: kevr1
 *
 * Created on June 19, 2018, 11:22 PM
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>

using namespace std;

//Function prototypes
float conversion(int);
int main(int argc, char** argv) {
//Declare the variables here
    int mars= 20;//The max that the function will enter
    
    cout << fixed << showpoint << setprecision(2);
    cout << "This program converts the Fahrenheit temperature to Celsius";
    cout << "\nfrom 1 - 20 degrees" << endl;
    cout << endl; 
    cout << setw(1) << "Fahrenheit" << setw(10) << "Celsius" << endl;
    cout << "-----------------------" << endl;
    for (int x=1;x<=mars;x++){
        float ans=conversion(x);
        cout << setw(1) << x << setw(20) << ans << endl;
     }

    return 0;
}
float conversion ( int x){
    float finals=0; //The answer that will be produced in the temperature
    
    finals = (static_cast<float>(x)-32)* 5/9;
    
    return finals;
}
