/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: kevr1
 *
 * Created on June 25, 2018, 10:39 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;
//This program will simulate the case study donation program in the examples
//but modify it in order to take in as many donations as the user wishes to 
//input into the array
//THIS ONE WILL DO IT FROM ASCENDING TO DECENDING ORDER
//Function prototypes
float *input (float *, int &);
void sort (float *, int );
void printOG (float *, int );
void printNew (float *, int);

int main(int argc, char** argv) {
//Declare the variables here
    float *insert; //The amount of donations that the user will place
    int gift; // The array that will hold the donations for the person
    float *amount=nullptr; //The amount that will equal to the array
    
    //outputs belong here 
    amount= input (insert, gift);//What this function does is point to the 
    //array
    printOG (amount, gift);//This will print out the original array
    sort (amount, gift); //This function will sort the array from least to 
    //greatest
    printNew(amount,gift);//This function will print the donations from greatest
    //to least
    
    //Deletes the arrays that were dynamically set
    delete [] insert;
    delete [] amount;
    insert=nullptr;
    amount=nullptr;
    return 0;
}
//What this function will do is print the donations from greatest to least
void printNew (float *amount, int input){
    //This will print out the array in order
    cout << "The Donations from Greatest to Least: " << endl;
    int last=input-1;//This will do it for the loop
    //This sort function will reverse the variable
        for(int x=0;x<last;x++){
            int temp=amount[last];
            amount[last]=amount[x];
            amount[x]=temp;
            last--;
        }
    //This will display the final value
    for (int x=0;x<input;x++){
        cout << *(amount+x) << " ";
    }
}

//What this function will do is print the original array
void printOG (float * total, int input ){
    cout << "The Original Donations: " << endl;
    //the loop that will print out the original function
    for (int x=0; x<input; x++){
        cout << *(total+x) << " ";
    }
    cout << endl;
}
    

//What this function does is sort the arrays from least to greatest
void sort (float * amount, int input){
    //What this function will do is sort the array form lowest to greatest
    for (int x=0;x<input; x++){
        for (int y=x;y<input;y++){
            if (amount[x]>amount[y]){
                int temp = amount [x];
                amount [x]=amount[y];
                amount [y]=temp;
            }
        }
    }
    
}

//What this function does is take in the amount of donations that will
//be inputted, and have the user input all of them
float *input (float * insert, int & input){
    //This part will have the user insert the amount of donations
    cout << "How many donations will be inputed: ";
    cin >> input;
    insert= new float [input];//What this part does is dynamically allocate
    //the variable with the bounds of input
    for (int mars=0;mars<input;mars++){
        cout << "Enter Donation #" << mars+1 << ": ";
        cin >> insert[mars];
    }
    return insert;
}