/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   inventory.h
 * Author: kevin
 *
 * Created on July 19, 2018, 9:10 PM
 */

#ifndef INVENTORY_H
#define INVENTORY_H

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cstring>
#include <memory>
#include <vector>
#include <string>

using namespace std;

class inventory {
public:
    inventory();//constructor 1 which will take in the 
    //4 variables and make them equal to zero
    inventory(int, int, float);//This part will accept the items number, cost,
    //and quantity as arguements. MUST CALL THE SEETOTALCOST FUNCTION
    //MUTATORS
    void setitemnumber (int);//accepts the number integer in order to set it
    void setquantity (int);//accepts the quantity integer
    void setcost (int);//will accept the cost value
    float seetotalcost (int, float);//WILL CALCULATE THE TOTAL COST OF THE ITEM AND 
    //STORE IT ONTO THE TOTAL COST FUNCTION
    //ACCESSORS
    int getitemnumber () const;
    int getquantity () const;
    float getcost () const;
    float gettotalcost () const;
    
   
private:
    int itemnumber;//an integer to hold the items number
    int quantity;//An int for holding the quantity of the item on hand
    float cost;//A float for holding the wholesale pre unit cost of the item
    float totalcost;//A float for holding th total inventory cost of the item
};

#endif /* INVENTORY_H */

