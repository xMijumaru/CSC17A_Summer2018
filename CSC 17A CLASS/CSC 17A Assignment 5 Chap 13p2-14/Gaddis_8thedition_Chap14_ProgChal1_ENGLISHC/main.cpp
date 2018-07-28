/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: kevin
 *
 * Created on July 20, 2018, 1:07 PM
 */

#include "english.h"
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cstring>
#include <vector>
#include <memory>
using namespace std;

//function prototypes
void input (int &);
void print (int, int, int, int, int);


int main(int argc, char** argv) {
 //Declare the variables here
    int enter;//entered in variable

 //Input process and outputs here
    input (enter);
   
    
    return 0;
}
//this function will send the things to the class and print them out
void print (int enter, int n1, int n2, int n3, int n4){
    english s(enter, n1, n2, n3, n4);
    cout << "English Conversion: " << endl;
    s.print();//prints out the final solution
}
//function will deal with the inputs
void input (int & enter){
    cout << "Enter a Number between 0-9999: ";
    cin >> enter;
    while (enter>9999||enter<0){
        cout << "Integer must be <=9999, try again: ";
        cin >>  enter;
    }
    int n1=enter/1000;
    int n2=(enter-(n1*1000))/100;
    int n3=((enter-(n1*1000)-(n2*100))/10);
    int n4=((enter-(n1*1000)-(n2*100)))-(n3*10);
    
    print (enter, n1,n2,n3,n4);
    
    
}

