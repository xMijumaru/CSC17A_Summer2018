/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: kevr1
 *
 * Created on July 8, 2018, 2:16 PM
 */

#include <cstdlib>
#include <iostream>
#include "newClass.h"
#include <string>

using namespace std;

//Function prototypes
void input (int &, int &, int &);
void print (int, int, int );

int main(int argc, char** argv) {
//Declare the variables here
    int day, year, month;
    string month2;
    //Process inputs and outputs here
    input (day, month, year);
    print (day, month, year);
    
    return 0;
}
//the purpose of this function is to return the answers
void print (int day, int month, int year){
    date mercury (day, month, year);//will hold the day
    
    mercury.date1();
    mercury.date2();
}
//this function will run in the inputs of the day, month, and year
void input (int & day, int& month, int & year){
    cout << "Enter the Month you wish to enter: ";
    cin >> month;
    while (month>12||month<1){
        cout << "Invalid Input, Please try again: ";
        cin >> month;
    }
    cout << "Enter the Day you wish to enter: ";
    cin >> day;
    while (day<1||day>31){
        cout << "Invalid Input, Please try again: ";
        cin >> day;
    }
    cout << "Enter the Year you wish to enter: ";
    cin >> year;
}