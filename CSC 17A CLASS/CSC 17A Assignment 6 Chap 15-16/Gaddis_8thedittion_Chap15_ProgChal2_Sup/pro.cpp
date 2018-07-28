/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   pro.cpp
 * Author: kevin
 * 
 * Created on July 21, 2018, 5:02 PM
 */

#include "pro.h"
#include <cstdlib>
#include <iomanip>
#include <string>
#include <vector>
#include <iostream>
#include <cstring>
#include "emp.h"
using namespace std;

//constructors
pro::pro():emp(){
    salary=0.0;
    bonus=0.0;
}
pro::pro(string name, int num, string hire, float Ssalary, float Sbonus) : 
emp(name, num, hire){
   cout << fixed << showpoint << setprecision(2);
    salary=Ssalary;
    bonus=Sbonus;
}
//Mutators
void pro::setsal(float x){
    salary=x;
}
void pro::setbon(float y){
    bonus=y;
}

//Accessor functions
float pro::getsal() const{
    return salary;
}
float pro::getbon() const{

 return bonus;   
}
