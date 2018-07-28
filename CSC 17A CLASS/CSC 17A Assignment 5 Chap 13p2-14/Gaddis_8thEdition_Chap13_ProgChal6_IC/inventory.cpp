/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   inventory.cpp
 * Author: kevin
 * 
 * Created on July 19, 2018, 9:10 PM 
 */

#include "inventory.h"
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cstring>
#include <memory>
#include <vector>
#include <string>

using namespace std;

inventory :: inventory (){
    itemnumber=0;
    quantity=0;
    cost=0.0;
    totalcost=0.0;
}
inventory :: inventory(int x , int y, float z){
    itemnumber=x;
    quantity=y;
    cost=z;
    totalcost=seetotalcost(y,z);
}
void inventory :: setitemnumber (int x){
    itemnumber=x; 
}
void inventory :: setquantity (int y){
    quantity=y;
}
void inventory :: setcost (int z){
    cost = z;
   
    
}
float inventory :: seetotalcost (int quantity, float cost) {
    float z;
     z=static_cast<float>(quantity)*(cost);
     return z;
 }
 
 int inventory :: getitemnumber() const{
     return itemnumber;
 }
 int inventory :: getquantity () const {
     return quantity;
 }
float inventory :: getcost () const {
     return cost;
 }
 float inventory :: gettotalcost () const {
     return totalcost;
 }