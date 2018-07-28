/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   english.cpp
 * Author: kevin
 * 
 * Created on July 20, 2018, 1:12 PM
 */

#include "english.h"
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cstring>
#include <vector>
#include <memory>
using namespace std;


english::english(int four, int w, int x, int y, int z){
    total=four;
    n1=w;
    n2=x;
    n3=y;
    n4=z;  
}
void english::print() const{
    const int max1=10;
    const int max2=21;
    static string lessthan20[max2]={"zero", "one", "two", "three", "four", "five",
    "six", "seven", "eight", "nine", "ten", "eleven", "twelve","thirteen",
    "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen", 
    "twenty"};
    static string hundred="hundred";
    static string thousand="thousand";
    static string ten[max1]={" ", "ten", "twenty", "thirty", "forty", "fifty", 
    "sixty","seventy", "eighty", "ninety"};
    
    if (total<=20){
        cout << lessthan20[total] << endl;
         }
    if (total>20&&total<100){
        if (n4==0){
            cout << ten[n3] << endl;
        }
        else {
        cout << ten[n3] << " " << lessthan20[n4] << endl;
        }
    }
    if (total>=100&&total<1000){
        if (n3==0&&n4==0){
            cout << lessthan20[n2] << " " << hundred << endl;
        }
        else if (n4==0){
            cout << lessthan20[n2] << " "<< hundred << " " << ten[n3] << endl;
        }
        else if (n3*10<=20){
            int temp=((n3*10)+n4);
            cout << lessthan20[n2] << " " << hundred << " " << lessthan20[temp]
                    << endl;
        } 
        else {
            cout << lessthan20[n2] << " " << hundred << " " << ten[n3]
                    <<" " <<  lessthan20[n4];
        }
        
    }
    if (total>=1000&&total<=9999){
        if (n2==0&&n3==0&&n4==0){
            cout << lessthan20[n1] << " " << thousand << endl;
        }
        else if (n3==0&&n4==0){
            cout << lessthan20[n1]<< " " << thousand << " "<< lessthan20[n2]
                   <<" " << hundred;
        }
        else if (n4==0){
             cout << lessthan20[n1]<< " " << thousand << " "<< lessthan20[n2]
                   <<" " << hundred << " " << ten[n3];
        }
        else if (n2==0&&n3*10<=20){
             int temp=((n3*10)+n4);
        cout << lessthan20[n1]<< " " << thousand << " " << lessthan20[temp];
        }
        else if (n3*10<=20){
            int temp=((n3*10)+n4);
             cout << lessthan20[n1]<< " " << thousand << " "<< lessthan20[n2]
                   <<" " << hundred << " " << lessthan20[temp];
            
        }
        else {
            cout << lessthan20[n1]<< " " << thousand << " "<< lessthan20[n2]
                   <<" " << hundred << " " << ten[n3] << " " << lessthan20[n4];
        }
    }
}