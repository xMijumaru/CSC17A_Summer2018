/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   emp.h
 * Author: kevin
 *
 * Created on July 21, 2018, 4:33 PM
 */

#ifndef EMP_H
#define EMP_H

#include <cstdlib>
#include <iomanip>
#include <string>
#include <vector>
#include <iostream>
#include <cstring>
using namespace std;

class emp {
public:
    emp();
    emp(string, int, string);
   
    //Mutators
    void setname (string);
    void setnum (int);
    void sethire (string);
  
    //Accessors
    string getname () const;
    int getnum () const;
    string gethire () const;
    
protected:
    string name;//name of the employee
    int num;//the employee number of the employee
    string hire;//the hire date of the employee
    

};

#endif /* EMP_H */

