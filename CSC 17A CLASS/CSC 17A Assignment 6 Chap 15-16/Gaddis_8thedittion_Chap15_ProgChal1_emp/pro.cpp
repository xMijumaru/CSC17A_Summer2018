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
    shift=0;
    pay=0.0;
}
pro::pro(string name, int num, string hire, int Sshift, float Spay) : 
emp(name, num, hire){
   cout << fixed << showpoint << setprecision(2);
    shift=Sshift;
    pay=Spay;
}
//Mutators
void pro::setpay(float x){
    pay=x;
}
void pro::setshift(int y){
    shift=y;
}

//Accessor functions
string pro::getshift() const{
    if (shift==1){
        return "Day";
    }
    if (shift==2){
        return "Night";
    }
}
float pro::getpay() const{

 return pay;   
}
