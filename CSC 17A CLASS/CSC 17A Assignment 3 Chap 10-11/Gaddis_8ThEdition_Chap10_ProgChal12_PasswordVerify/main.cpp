/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: kevr1
 *
 * Created on June 30, 2018, 6:17 PM
 */

#include <cstdlib>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <cctype>
using namespace std;

//Function Prototypes
void input (char [], int );//prompts the user to input
void Calc (char [], int );//does the calculations (except for the digits)
bool size (char [], int );//checks the size of the password
void print (bool, bool, bool, bool, char []);//prints out all the outputs

int main(int argc, char** argv) {
//Declare the variables here
    int max=300;//The maximum amount of characters
    char pass[max]; //MORE THAN NEEDED IN THE ARRAY
    
    //Display the outputs here
    input (pass, max);//calls the input
    Calc(pass, max);//does the calculations and calls the print function
    
    return 0;
}
//Checks to see if the password is over 6 characters long
bool size (char pass [], int max){
    int amount=strlen(pass);
    if (amount<6){
     return false;   
    }
    else {
     return true;
    }
}
//This function checks to see if the password works or not
//also process all the outputs
void print (bool size, bool upper, bool lower, bool digit, char pass[]){
    //Check the senarios here
    cout << "\nThe Password Entered: ";
    cout << pass << endl;
    
    if (size==true&&upper==true&&lower==true&&digit==true){
        cout << "The Password Is Valid " << endl;
    }
    if (size==false||upper==!(true)||lower==!(true)||digit == !(true)){
        cout << "The Password is Invalid " << endl;
    }
    if (size==false){
        cout << "(The Password must be over 6 Characters) " << endl;
    }
    if (upper==!(true)){
        cout << "(The Password must contain an uppercase letter) " << endl;
    }
    if (lower==!(true)){
        cout << "(The Password must contain a lowercase letter)" << endl;
    }
    if (digit==!(true)){
        cout << "(The Password must contain a digit) " << endl;
    }
}
//This function prompts the printing
void Calc (char pass[], int max){
   //declare variables
    bool Char=size (pass, max);//checks to see if the password is over 6 digits
    bool upper;//checks to see if there is an uppercase letter
    bool lower;//checks to see if there is a lower case letter
    bool digit; // checks to see if there is a digit
    //runs the checks for the password
    for (int x=0; x<strlen(pass);x++){
        if (isdigit(pass[x])){//checks to see if there is a digit
            digit=true;
        }
        //checks for the lower case
        if (islower(pass[x])){
            lower=true;
        }
        //checks for the upper case
        if (isupper(pass[x])){
            upper=true;
        }
   
    }
//this part will call in the print function to finish the work
    //process outputs here
    print (Char, upper, lower, digit, pass);
    
}

//The purpose of this function is to have the user input the string
void input (char pass[], int max){
    cout << "Enter Your New Password" << endl;
    cout << "(Must Have a Capital and lowercase Letter)" <<endl;
    cout << "(Must be over 6 Characters long) " << endl;
    cout << "(Must require a Digit)" << endl;
    cin.getline (pass, max);
 
}
