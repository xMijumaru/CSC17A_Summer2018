/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: kevin
 *
 * Created on July 23, 2018, 7:48 PM
 */

#include <iomanip>
#include <iostream>
#include <cstring>
#include "time.h"


using namespace std;


int main(int argc, char** argv){
    
    int hour;
    int sec;
    
    cout << "Enter a Valid hour: ";
    try{
        cin >> hour;
        if (hour<0||hour>2359){
            throw 99;
        }
    }catch (int x){
        cout << "Error";
    
    }
    cout << "Enter valid Seconds: ";
    try {
        cin >> sec;
        if (sec<0||sec>60){
            throw 99;
        }
    }catch (int x){
        cout << "Error";
    }
    
     
    cout << "The time is " << hour << ": " << sec;
    
    return 0;
}


