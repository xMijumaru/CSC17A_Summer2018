/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: kevr1
 *
 * Created on June 20, 2018, 6:11 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

//Function Prototypes 
bool linear(int [], int, int);

int main(int argc, char** argv) {
   
    //Declare all Variables Here
    int lottery;//The weeks winning numbers that the user will input
    int size=10;// Size that will be passed on during the search
    const int num=10;//The 10 numbers that are inputted
    int array[num]={13579, 26791, 26792, 33445, 55555,
        62483, 77777, 79422, 85647, 93121};//the numbers to compare to
   bool results;
   
    //Input or initialize values Here
    cout << "Enter the five winning lottery numbers (exclude spaces): ";
    cin>>lottery;
    results=linear(array, 10, lottery);
    
    
    if (results==true) 
    {
        cout << "You won the lottery " << endl;
    }
    if(results==false){
        cout << "You did not win the lottery " << endl;
    }
 
 
    return 0;
}
bool linear (int array[], int num, int lottery)
{
    for (int x=0;x<num;x++){
        if (lottery==array[x]){
            return true;
        }
    }
    return false;
}
