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
    bonus=0.0;
    req=0;
    done=0;
}
pro::pro(string name, int num, string hire,float Sbonus, int Sreq, int Dreq) : 
emp(name, num, hire){
   cout << fixed << showpoint << setprecision(2);
   bonus=Sbonus;
   req=Sreq;
   done=Dreq;
}
//Mutators
void pro::setbonus(float x){
    bonus=x;
}
void pro::setreq(int y){
    req=y;
}
void pro::setdone(int z){
    done=z;
}

//Accessor functions
float pro::getbon() const{
    return bonus;
}
int pro::getreq() const{
    return req;
}
int pro::getdone() const{
    return done;
}