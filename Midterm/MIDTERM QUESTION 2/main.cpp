/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: kevr1
 *
 * Created on July 13, 2018, 9:42 PM
 */

#include <cstdlib>
#include <iomanip>
#include <cstdlib>
#include <cctype>
#include <cstring>
#include <iostream>
using namespace std;
//global Variables
const int MM=300;//the max amount for the char arrays. I am forced to put it here 
//due to the fact that it crashes
struct emp{
    char name[MM];//determines the name of the employee
    int hours;//number of hours worked
    float pay;//the amount of pay
    float total;//total payment
};
//function prototypes
int input ();
void *declare (int, emp *);//declares the variable
void *print (int, emp * );//prints the amount

int main(int argc, char** argv) {
  //Declare the variables here
    int amount; // the amount of employees 
    emp *point1;//points to the value of the emp
    
    //Display inputs and outputs
    amount=input();
    declare (amount, point1);
    
    //delete here
    delete []point1;
    point1=nullptr;
    return 0;
}
void *print (int amount, emp * point1){
    for (int x=0;x<amount;x++){
        cout << fixed << showpoint << setprecision(2);
        cout << "Company LLC." << endl;
        cout << "1234 Address RD. Los Angeles, CommieFornia, 90201" << endl;
        cout << point1[x].name << "  Amount: " << point1[x].total << endl; 
    }
}
void *declare (int amount, emp * point1){
    point1= new emp [amount];
    for (int x=0;x<amount;x++){
        cout << "Enter the Name for Employee " << x+1 << ": ";
        cin.ignore();
        cin.getline(point1[x].name, MM);
        cout << "Enter the amount of hours Worked for #" << x+1 <<" : " ;
        cin >> point1[x].hours;
        while (point1[x].hours<0){
            cout << "No Negative values again, please try again: ";
            cin >> point1[x].hours;
        }
        cout << "Enter the Pay Rate for #" << x+1 << ": ";
        cin >> point1[x].pay;
        while (point1[x].pay<0){
            cout << "No Negative values again, please try again: ";
            cin >> point1[x].pay;
        }
        cout << endl;
        //this part will do the calculation for the last one
        if (point1[x].hours<30){
            point1[x].total=(point1[x].pay*point1[x].hours);
        }
            else if (point1[x].hours>30&&point1[x].hours<50){
                point1[x].total=(point1[x].pay*30)+(((point1[x].hours-30)*
                        point1[x].pay)*2);
            }
            else if (point1[x].hours>50){
                point1[x].total=(point1[x].pay*30)+((point1[x].pay*20)*2)+
                        ((point1[x].hours-50)+point1[x].pay*3);
            }
        
    }
    print (amount, point1);
}
//the first function
int input (){
    int number;
    cout << "How many Employees are going to be calculated?: ";
    cin >> number;//number of employees
    return number;
}