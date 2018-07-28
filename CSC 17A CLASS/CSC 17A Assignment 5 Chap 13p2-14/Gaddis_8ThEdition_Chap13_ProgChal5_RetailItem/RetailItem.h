/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   RetailItem.h
 * Author: kevin
 *
 * Created on July 19, 2018, 6:47 PM
 */

#ifndef RETAILITEM_H
#define RETAILITEM_H
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cstring>
#include <vector>
#include <memory>
#include <string>
using namespace std;

class RetailItem {
public:
    RetailItem(string, int, float);
    string getdescription() const;
    int getnumber () const;
    float getcost () const;
    void setd (string);
    void setn (int);
    void setcost (float);
    
private:
    string desc;//the description of the item
    int number;//the number of items in the class
    float cost;//the cost of the item
};

#endif /* RETAILITEM_H */

