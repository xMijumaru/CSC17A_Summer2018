/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: kevin
 *
 * Created on July 21, 2018, 5:52 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <string>

#include "parent.h"

using namespace std;

//function prototypes
void input (float&, float&, float&, float&);
void print (float&, float&, float&, float&);
int main(int argc, char** argv) {
    float gram;//grades the grammar of the assignment
    float spell;//grades the spelling
    float correct;//grades the correct length
    float content;//grades the content of the assignment
    
    //input and output processes
    input (gram,spell,correct,content);
    print (gram, spell, correct, content);
    return 0;
}
//this function handles all the inputs
void input (float & gram, float & spell, float & correct, float & content){
    cout << "points in Grammar portion: ";
    cin >> gram;
    cout << "points of Spelling portion: ";
    cin >> spell;
    cout << "points of Correct format portion: ";
    cin >> correct;
    cout << "points of content portion: ";
    cin >> content;
}
//this function does the printing
void print (float & gram, float & spell, float & correct, float & content){
    parent x(gram, spell, correct, content);
    
    cout << fixed << showpoint << setprecision(2);
    cout << "Score: " << x.ascore() << endl;
    cout << "Grade: " << x.agrade() << endl;
}