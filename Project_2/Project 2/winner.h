/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   winner.h
 * Author: kevin
 *
 * Created on July 27, 2018, 10:07 AM
 */

#ifndef WINNER_H
#define WINNER_H


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

class winner : public display{
public:
   winner();
   getwinner(int , int , int );
   void winnerp();
    virtual ~winner();
private:
    int winner1;
    int winner2;
    int winner3;
    
    friend void gameover(winner &);
};

#endif /* WINNER_H */

