/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   winner.cpp
 * Author: kevin
 * 
 * Created on July 27, 2018, 10:07 AM
 */


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

winner::winner():display() {
    cout << "Professor Oak: We are recording your victory" << endl;
}
void winner::winnerp(){
    cout << "-----------------------------------------" << endl;
}
winner::~winner() {
    cout << "Congrats on your victory" << endl;
}

