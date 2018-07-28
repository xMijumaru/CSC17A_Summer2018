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
    pro (string, int, string, float, int, int);
    //mutator functions
    void setbonus (float);
    void setreq (int);
    void setdone (int);
    
    //Accessor functions
    float getbon() const;
    int getreq() const;
    int getdone() const;
    
private:
    float bonus;
    int req;
    int done;

};

#endif /* PRO_H */

