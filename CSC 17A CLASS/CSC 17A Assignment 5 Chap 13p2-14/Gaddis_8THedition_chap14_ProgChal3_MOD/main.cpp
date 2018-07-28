/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: kevin
 *
 * Created on July 20, 2018, 5:42 PM
 */

#include "day.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <memory>

using namespace std;


int main(int argc, char** argv) {
    //declare the variables here
    int enter;
    
    
    cout << "Enter a day between 1 and 365: ";
    cin >> enter;
    while (enter>365||enter<1){
        cout << "Invalid number, please try again: ";
        cin >> enter;    
    }
    day s(enter);//calls the object
    s.print();//prints out the answer
    return 0;
}

