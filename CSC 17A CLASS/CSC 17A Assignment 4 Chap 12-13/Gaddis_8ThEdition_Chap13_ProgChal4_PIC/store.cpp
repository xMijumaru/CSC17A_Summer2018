/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   store.cpp
 * Author: kevr1
 * 
 * Created on July 8, 2018, 8:14 PM
 */

#include "store.h"
#include <iostream>
using namespace std;
store::store(string x, string y, int z, string a){
    name=x;
    add=y;
    age=z;
    phone=a;
    
}
void store::getinfo()const{
    cout << "Name: " << name << endl;
    cout << "Address: " << add << endl;
    cout << "Phone #: " << phone << endl;
    cout << "Age    : " << age << endl;
}