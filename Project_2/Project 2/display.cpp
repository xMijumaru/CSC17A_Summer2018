/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   display.cpp
 * Author: kevin
 * 
 * Created on July 27, 2018, 10:08 AM
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

display::display() {
    cout << "*Professor Oak has arrived* " << endl;
    cout << "*You have been lead to the hall of fame room*" << endl;
}
display::display(int x, int y, int z){
    pokemon1=x;
    pokemon2=y;
    pokemon3=z;
}
display::display(int x , int y){
    pokemon1=x;
    pokemon2=y;
}
display::getpokemon1(int x){
    pokemon1=x;
}
display::getpokemon2(int y){
    pokemon2=y;
}
display:: getpokemon3(int z){
    pokemon3=z;
}
