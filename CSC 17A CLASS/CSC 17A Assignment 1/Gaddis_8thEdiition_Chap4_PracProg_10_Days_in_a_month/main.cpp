/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: kevr1
 * Created on June 19, 2018, 8:41 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//To display the amount of days in a month
int main(int argc, char** argv) {
//Display all the variables here
    int month; //The user will input the month 
    int year; //The user will input the year on here
    char happy; //in order for the user to restart this program
    
    do{
    //Display inputs and outputs here
    cout << "This program calculates the days of the month " << endl;
    cout << "Enter the month (1-12): ";
    cin >> month;
    while (month>12||month<=0){
        cout << endl;
        cout << "Your input you entered is invalid" << endl;
        cout << "Enter the month (1-12): ";
        cin >>month;
    }
    cout << "Enter the year of the month: ";
    cin >> year;
    
    //This switch statement will bring up every possible senario avaliable
    switch (month){
        case 1:
        {
            cout << "There are 31 Days in that month " << endl;
        break;
        }
        case 2:{
            if (year %100==0){
                if (year%400==0){
                    cout << "There are 29 days in this month" << endl;
                }
            }
            else if (year%4==0){
                cout << "There are 29 days in this month " << endl;
            }
            else {
                cout << "There are 27 days in this month" << endl;
            }
         break;   
        }
        case 3:{
            cout << "There are 30 Days in this month " << endl;
            break;
        }
        case 4:{
            cout << "There are 30 days in this month " << endl;
            break;
        }
        case 5: {
            cout << "There are 31 days in this month " << endl;
            break;
        }
        case 6:{
            cout << "There are 30 days in this month " << endl;
            break;
        }
        case 7:{
            cout << "There are 31 days in this month " << endl;
            break;
        }
        case 8:{
            cout << "There are 31 days in this month" << endl;
            break;
        }
        case 9:{
            cout << "There are 30 days in this month " << endl;
            break;
        }
        case 10:{
            cout << "There are 31 days in this month " << endl;
            break;
        }
        case 11:{
            cout << "There are 30 days in this month" << endl;
            break;
        }
        case 12:{
            cout << "There are 31 days in this month " << endl;
            break;
        }
    }//Lines up and shoots the switch statement putting it to an end
    
    cout << "Press Y if you wish to restart the program: ";
    cin>> happy;
    
    }while (happy=='Y'||happy=='y');
    cout << "Terminating program" << endl;
        return 0;
}

