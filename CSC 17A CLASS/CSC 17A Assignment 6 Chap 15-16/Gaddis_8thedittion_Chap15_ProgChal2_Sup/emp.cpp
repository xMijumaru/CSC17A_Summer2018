/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   emp.cpp
 * Author: kevin
 * 
 * Created on July 21, 2018, 4:33 PM
 */
#include <cstdlib>
#include <iomanip>
#include <string>
#include <vector>
#include <iostream>
#include <cstring>
#include "emp.h"

using namespace std;


     emp::emp(){
         name=" ";
         num=0;
         hire=" ";
    }
    emp::emp(string x, int y, string z){
        //makes all the numbers here equal to the overloaded constructor
        name=x;
        num=y;
        hire=z;
    }
    //Mutators
    void emp::setname (string mercury){
        name=mercury;
    }
    void emp::setnum (int ethereum){
        num=ethereum;
    }
    void emp::sethire (string mars){
        hire=mars;
    }
    //Accessors
    string emp::getname () const{
        return name;
    }
    int emp::getnum () const{
        return num;
    }
    string emp:: gethire () const{
        return hire;
    }

