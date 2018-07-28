/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   day.h
 * Author: kevin
 *
 * Created on July 20, 2018, 5:44 PM
 */

#ifndef DAY_H
#define DAY_H

#include "day.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <memory>
using namespace std;

class day {
public:
    day(int );
    void print () const;
    
private:
    int heute;
};

#endif /* DAY_H */

