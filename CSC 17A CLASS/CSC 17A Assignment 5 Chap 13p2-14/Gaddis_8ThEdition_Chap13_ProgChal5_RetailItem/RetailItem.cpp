/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   RetailItem.cpp
 * Author: kevin
 * 
 * Created on July 19, 2018, 6:47 PM
 */

#include "RetailItem.h"
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cstring>
#include <vector>
#include <memory>
#include <string>
using namespace std;

RetailItem::RetailItem(string x, int y, float z) {
    desc=x;
    number=y;
    cost=z;
}
//mutates the variables
void RetailItem::setd (string x){
    desc=x;
}
void RetailItem:: setn (int y){
    number=y;
}
void RetailItem:: setcost(float z){
    cost = z;
}
//Accesses the variables 
string RetailItem:: getdescription() const {
    return desc;
}
int RetailItem:: getnumber() const {
    return number;
}
float RetailItem:: getcost() const {
    return cost;
}