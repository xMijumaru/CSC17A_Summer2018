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
void input ( int &, int);//prompts the user for the input
int main(int argc, char** argv) {
//declare the variables here 
    const int max=4;//the character will keep 4 numbers
    int enter;//the number that will be entered to encrypt the data
    
    //Display output and inputs here
    input (enter, max);
    
    
    return 0;
}
void input (int & enter, int max){
    cout << "Enter a 4 Digit Integer: ";
    cin >> enter;
    while (enter>9999||enter<1000){
        cout << "The number must be Digits long, try again: ";
        cin >> enter;
    }
    int n1=enter/1000;
    int n2=(enter-(n1*1000))/100;
    int n3=((enter-(n1*1000)-(n2*100))/10);
    int n4=((enter-(n1*1000)-(n2*100)))-(n3*10);
    if (n1==8||n1==9||n2==8||n2==9||n3==8||n3==9||n4==8||n4==9){
        cout << "Number cannot contain 8 or 9" << endl;
    }
    int x=(n1+5)%8; cout << x;
    int y=(2*n1)-5; cout << y;
}
