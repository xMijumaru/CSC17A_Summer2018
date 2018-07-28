/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   day.cpp
 * Author: kevin
 * 
 * Created on July 20, 2018, 5:44 PM
 */

#include "day.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <memory>
using namespace std;

day::day(int x) {
    heute=x;
}
void day::print() const{
    const int x=12;
    const int y=32;
    static string month[x]={"January", "February", "March", "April", "May", 
    "June", "July", "August", "September", "October", "November", "December"};
    static int time[y]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,
    22,23,24,25,26,27,28,29,30,31};
    cout << "Day "<<heute<< " is ";
    if (heute>=1&&heute<=31){
        cout << month[0] << " " << time[heute] << endl;
    }
    else if (heute>31 && heute<=59){
        cout << month[1] << " " << time [heute-31] << endl;
    }
     else if (heute>59 && heute<=90){
         cout << month[2] << " " << time[heute-59] << endl;
    }
     else if (heute>90 && heute<=120){
         cout << month[3] << " " << time[heute-90] << endl;
    }
     else if (heute>120 && heute<=151){
         cout << month[4] << " " << time[heute-120] << endl;
    }
     else if (heute>151 && heute<=181){
         cout << month[5] << " " << time[heute-151] << endl;
    }
     else if (heute>181 && heute<=212){
         cout << month[6] << " " << time[heute-181] << endl;
    }
     else if (heute>212 && heute<=243){
         cout << month[7] << " " << time[heute-212] << endl;
    }
     else if (heute>243 && heute<=273){
         cout << month[8] << " " << time[heute-243] << endl;
    }
     else if (heute>273 && heute<=304){
         cout << month[9] << " " << time[heute-273] << endl;
    }
     else if (heute>304 && heute<=334){
         cout << month[10] << " " << time[heute-304] << endl;
    }
     else if (heute>334 && heute<=365){
         cout << month[11] << " " << time[heute-334] << endl;
    }
}

