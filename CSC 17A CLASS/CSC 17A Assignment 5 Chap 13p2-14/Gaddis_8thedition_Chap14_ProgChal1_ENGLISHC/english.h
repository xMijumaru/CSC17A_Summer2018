/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   english.h
 * Author: kevin
 *
 * Created on July 20, 2018, 1:12 PM
 */

#ifndef ENGLISH_H
#define ENGLISH_H

#include "english.h"
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cstring>
#include <vector>
#include <memory>
using namespace std;

class english {
public:
  
    english (int, int, int, int, int);//constructor #2
    void print() const;
   
private:
    int total;//the total value of the integer
    int n1;//the total value of the thousands place
    int n2;//the total value of the hundreds pace
    int n3;//the total value of the tens place
    int n4;//the total value of the ones place
};

#endif /* ENGLISH_H */

