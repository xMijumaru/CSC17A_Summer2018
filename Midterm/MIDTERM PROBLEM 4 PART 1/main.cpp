/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: kevr1
 *
 * Created on July 14, 2018, 11:24 AM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstring>
using namespace std;

//Function Prototypes
void input1 ( int &, int);//prompts the user for the input
int main(int argc, char** argv) {
//declare the variables here 
    const int max=4;//the character will keep 4 numbers
    int enter;//the number that will be entered to encrypt the data
    
    //Display output and inputs here
    input1 (enter, max);
    
    
    return 0;
}
void input1 (int & enter, int max){
    //Decalare the variables here 
    int encrypt;//encrypts the data
    cout << "Enter a 4 Digit Integer: ";
    cin >> enter;
    while (enter>9999||enter<1000){
        cout << "The number must be 4 Digits long, try again: ";
        cin >> enter;
    }
    int n1=enter/1000;
    int n2=(enter-(n1*1000))/100;
    int n3=((enter-(n1*1000)-(n2*100))/10);
    int n4=((enter-(n1*1000)-(n2*100)))-(n3*10);
    if (n1==8||n1==9||n2==8||n2==9||n3==8||n3==9||n4==8||n4==9){
        cout << "Number cannot contain 8 or 9" << endl;
    }
    else {
    int d1=(n1+5)%8;
    int d2=(n2+5)%8;
    int d3=(n3+5)%8;
    int d4=(n4+5)%8;
    encrypt=(d3*1000)+(d4*100)+(d1*10)+(d2);
        if (d1==8||d1==9||d2==8||d2==9||d3==8||d3==9||d4==8||d4==9){
            cout << "Number: " << encrypt << "has been flagged " << endl;
        }
        else{
            cout << "Encrypted Number: " << encrypt << endl;
        }
    }
}
 