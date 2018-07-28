/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: kevin
 *
 * Created on July 19, 2018, 6:47 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cstring>
#include <vector>
#include <memory>
#include "RetailItem.h"

using namespace std;


int main(int argc, char** argv) {
    const int num=3;
    RetailItem items[num]= {
        RetailItem("Jacket", 12, 59.95),
        RetailItem("Designer Shorts", 40, 34.95),
        RetailItem("Shirt", 20, 24.95)
    };
    
    for (int x=0;x<num;x++){
        cout << setw(0) << "Item #" << x+1;
        cout << setw(20) << items[x].getdescription();
        cout << setw(10) << items[x].getnumber();
        cout << setw(15) << items[x].getcost();
        cout << endl;
    }
    return 0;
}

