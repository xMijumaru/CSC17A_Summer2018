/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: kevin
 *
 * Created on July 14, 2018, 5:03 PM
 */


#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstring>

using namespace std;
void input999(int &, const int);
int main(int argc, char** argv) {
//DECLARE VARIABLES HERe
    const int max=4;//maximum amount of digits
    int input;//the input that the user will insert
    
    //Display inputs and outputs
    input999(input, max);
    
    return 0;
}
void input999(int & enter, const int max){
     int decrypt;//encrypts the data
    cout << "Enter a 4 Digit Integer: ";
    cin >> enter;
    while (enter>9999||enter<1000){
        cout << "The number must be 4 Digits long, try again: ";
        cin >> enter;
    }
    int n1=(enter/1000+3)%8;
    int n2=(enter%1000/100+3) %8;
    int n3=(enter%1000%100/10+3)%8;
    int n4=(enter%1000%100%10+3)%8;
    decrypt=(n3*1000)+(n4*100)+(n1*10)+(n2);
    cout << "Decrypted Number: " << decrypt;
    
}
