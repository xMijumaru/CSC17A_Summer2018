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
    pro GodEmporer("Donald Trump", 420, "January 20, 2017", 400.25, 50,30);
    
    //display objects outputs here
     cout << "Employee using regular Parent Class " << endl;
    cout << "Name: " << GodEmporer.getname() << endl;
    cout << "Hire Date: " << GodEmporer.gethire() << endl;
    cout << "Employee #: "<<GodEmporer.getnum() << endl;
    cout << "Monthly bonus: " <<GodEmporer.getbon()<<endl;
    cout << "Hrs Training needed: " <<GodEmporer.getreq() << endl;
    cout << "Hours Completed : " << GodEmporer.getdone()<< endl;
    
    return 0;
}

