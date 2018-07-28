/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: kevin
 *
 * Created on July 19, 2018, 8:59 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cstring>
#include <memory>
#include <vector>
#include <string>
#include "inventory.h"

using namespace std;

//Function Prototypes
void input (int &, int &, float &);//inputs the items of the thingys
void print (int , int , float );

int main(int argc, char** argv) {
    int item;//the item number for the customer
    int quantity;//enters the quantity for the item number
    float cost;//the cost of the item
    
    //Display inputs and outputs
    input (item, quantity, cost);//calls forth the input function
    print (item, quantity, cost);//prints out the answers
    
    return 0;
}

//The purpose of this function is to input the cost of the items
void input (int & mercury, int & venus, float & mars){
    cout << "Enter the item number of the matching inventory: ";
    cin >> mercury;
    while (mercury<0){
        cout << "Negative numbers not accepted, try again: ";
        cin >> mercury;
    }
    cout << "Enter the quantity of items in stock : ";
    cin >> venus;
    while (venus<0){
        cout << "Negative numbers not accepted, try again: ";
        cin >> venus;
    }
    cout << "Enter the cost of the Item: ";
    cin >> mars;
    while (mars<0){
        cout << "Negative numbers not accepted, try again: ";
        cin >>mars;
    }
}
//the purpose of this function is to print out the answer
void print (int item, int quantity, float cost){
    inventory s(item, quantity, cost);
    cout << fixed << setprecision(2) << showpoint;
    cout << "Item Number: " << s.getitemnumber() << endl;
    cout << "Quantity:    " << s.getquantity() << endl;
    cout << "Cost:         $" << s.getcost() << endl;
    cout << "Total Cost:   $" << s.gettotalcost() << endl;
}
