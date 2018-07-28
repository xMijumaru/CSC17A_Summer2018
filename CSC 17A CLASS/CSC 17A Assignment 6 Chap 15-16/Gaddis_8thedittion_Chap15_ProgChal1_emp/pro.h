/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   pro.h
 * Author: kevin
 *
 * Created on July 21, 2018, 5:02 PM
 */

#ifndef PRO_H
#define PRO_H

#include <cstdlib>
#include <iomanip>
#include <string>
#include <vector>
#include <iostream>
#include <cstring>
#include "emp.h"
using namespace std;

class pro : public emp{
public:
    pro();
    pro (string, int, string, int, float);
    //mutator functions
    void setpay (float);
    void setshift (int);
    
    //Accessor functions
    string getshift() const;
    float getpay() const;
    
private:
    int shift; //the first shift will correspond to 1 and the night shift will
    //correspond to the second shift
    float pay; //the pay of that person by the hour

};

#endif /* PRO_H */

