/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   parent.h
 * Author: kevin
 *
 * Created on July 21, 2018, 6:03 PM
 */

#ifndef PARENT_H
#define PARENT_H

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <string>

#include "parent.h"

using namespace std;

class parent {
public:
    parent();
    parent (float, float, float, float);//does the 2nd constructor functions
    float getscore (float, float, float, float);
    char getgrade (float);
    
    char agrade () const;
    float ascore () const;
private:
    float score;
    char grade;
    float gram;
    float spell;
    float cor;
    float con;
};

#endif /* PARENT_H */

