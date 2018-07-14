/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   store.h
 * Author: kevr1
 *
 * Created on July 8, 2018, 8:14 PM
 */

#ifndef STORE_H
#define STORE_H
#include "store.h"
#include <iostream>
#include <string>
using namespace std;

class store {
    private:
    string name;
    int age;
    string add;
    string phone;
public:
store (string , string , int , string );
void getinfo () const;

};
#endif /* STORE_H */

