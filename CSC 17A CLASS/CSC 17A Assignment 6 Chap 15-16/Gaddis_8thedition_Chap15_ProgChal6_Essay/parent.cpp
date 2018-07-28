/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   parent.cpp
 * Author: kevin
 * 
 * Created on July 21, 2018, 6:03 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <string>
#include "parent.h"

using namespace std;

parent::parent() {
    score=0.00;
    grade=' ';
    gram=0.00;
    spell=0.00;
    cor=0.00;
    con=0.00;
   
}

parent::parent(float w, float x, float y, float z){
    gram=w;
    spell=x;
    cor=y;
    con=z;
    score =getscore(w, x, y, z);
    grade=getgrade(score);
}
float parent::getscore(float w, float x, float y, float z) {
    float perc;
    perc = (((w*0.01)+(x*0.01)+(y*0.01)+(z*.01))*100);
    return perc;
}
char parent::getgrade(float x){
    if (x>=90){
        return 'A';
    }
    else if (x<90&&x>=80){
        return 'B';
    }
    else if (x<80&&x>=70){
        return 'C';
    }
    else if (x<70&&x>=60){
        return 'D';
    }
    else if (x<60){
        return 'F';
    }
}
char parent :: agrade () const{
    return grade;
}
float parent :: ascore () const {
    return score;
}