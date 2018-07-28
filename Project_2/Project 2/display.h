/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   display.h
 * Author: kevin
 *
 * Created on July 27, 2018, 10:08 AM
 */

#ifndef DISPLAY_H
#define DISPLAY_H


#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <fstream>
#include <ctime>
#include <vector>
#include <cstring>
#include <string>
#include "winner.h"
#include "display.h"

using namespace std;

class display {
    
public:
    display();
    display(int, int, int);
    display(int, int);
    getpokemon1(int);
    getpokemon2(int);
    getpokemon3(int);
    
protected:
   char max[300]; //object array
   int pokemon1;
   int pokemon2;
   int pokemon3;
   
};

#endif /* DISPLAY_H */

