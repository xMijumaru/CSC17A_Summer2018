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
    
     Time i(05,27,32, 2);
    
     
    cout << "The regular time is " << i.getHour() <<":"<<i.getMin()<<":"
            <<i.getSec() << " " << i.getap() << endl;
    cout << "Military Time " << endl;
    cout << i.milTime() << ":" << i.getMin() << ":" << i.getSec() << endl;
    
    return 0;
}


