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
    emp GodEmporer("Donald Trump", 420, "January 20, 2017");
    
    //display objects outputs here
    cout << fixed << showpoint << setprecision(2);
    cout << "Employee using regular Parent Class " << endl;
    cout << "Name: " << GodEmporer.getname() << endl;
    cout << "Hire Date: " << GodEmporer.gethire() << endl;
    cout << "Employee #: "<<GodEmporer.getnum() << endl;
    cout << endl;
    cout << "Employee using the Daughter Class" << endl;
    pro try2("Donald Trump", 420, "January 20, 2017", 1, 450000.50);
    cout << "Name: " << try2.getname() << endl;
    cout << "Hire Date: " << try2.gethire() << endl;
    cout << "Employee #: " << try2.getnum() << endl;
    cout << "Shift: " << try2.getshift() << endl;
    cout << "Pay Rate: " << try2.getpay() << endl;
    
    return 0;
}

