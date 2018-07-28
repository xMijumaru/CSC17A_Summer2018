/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: kevr1
 *
 * Created on July 8, 2018, 6:04 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cstring>
#include <cctype>
#include <fstream>
#include "store.h"
using namespace std;


//structure
struct personal{
     
    string name; //will hold the name of the person
    string add;  //holds the address of the person
    int age;    //age of the person
    string phone;//phone number of the person
};

//Function Prototypes
void value (personal *, int);

int main(int argc, char** argv) {
//Declare the Variables
    const int max=3;//the program is for 3 people
    personal enter; //the information inside the program
    personal *s=&enter;//the pointer which points to the address of the variable
    s=new personal [max];//dynamically allocated variables
    ofstream file;    //the file that will be inputted
    file.open("mars.txt");//opens a file to write the information
    
    //process inputs and outputs
    value (s, max);//this program will set the value
    return 0;
}
//the purpose of this function is to set the values
void value (personal * s, int max){
    
    
    s[0].name="bob";
    s[1].name="bob1";
    s[2].name="bob2";
    
    s[0].add="address";
    s[1].add="address1";
    s[2].add="address2";
    
    s[0].age=10;
    s[1].age=20;
    s[2].age=30;
    
    s[0].phone="1234567";
    s[1].phone="2739834";
    s[2].phone="12345978";
    
    cout << s[0].name;
    //will run all the checks
    store step1 (s[0].name, s[0].add, s[0].age, s[0].phone);
    store step2 (s[1].name, s[1].add, s[1].age, s[1].phone);
    store step3 (s[2].name, s[2].add, s[2].age, s[2].phone);
    step1.getinfo();
    step2.getinfo();
    step3.getinfo();
}
