/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: kevin
 *
 * Created on July 21, 2018, 4:13 PM
 */

#include <cstdlib>
#include <iomanip>
#include <string>
#include <vector>
#include <iostream>
#include <cstring>
#include "emp.h"
#include "pro.h"
using namespace std;

//Function Prototypes

int main(int argc, char** argv) {
//declare variables and objects here
    cout << "Employee using supervisor class: " << endl;
    pro try2("Donald Trump", 420, "January 20, 2017", 400000.00, 1.00);
    cout << "Name: " << try2.getname() << endl;
    cout << "Hire Date: " << try2.gethire() << endl;
    cout << "Employee #: " << try2.getnum() << endl;
    cout << "Salary: " << try2.getsal() << endl;
    cout << "Bonus: " << try2.getbon() << endl;
    
    return 0;
}

