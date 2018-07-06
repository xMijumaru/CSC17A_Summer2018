/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: kevr1
 *
 * Created on June 23, 2018, 12:26 PM
 */

#include <cstdlib>
#include <iostream>
#include <limits>
#include <iomanip>
using namespace std;

//Function Prototypes
void sort (float *, int);
void average (float *, int, float);

int main(int argc, char** argv) {
//Declare the Variables here
    float *score; //The score of the students test
    float total; //Will get the total in order to calculate the average
    int number; //The user will insert the number of test that will be scored
    int happy; //The division that will be done to calculate the average
    
    //Display the output here
    cout << "How many test scores are going to be inputted: ";
    cin >> number;
    //This will allocate the array
    happy=number;
    score= new float [number];
    
    //The user will input the scores here
    for (int x=0; x<number;x++){
        cout << "Enter the score for student " << x + 1 << ": ";
        cin >> score[x];
        while (score[x]<0||score[x]>100){
            cout << "The Syntax you entered is invalid, Enter a valid input: ";
            cin >> score[x];
        }
    }
   //Display the outputs here
    average (score, happy, total);
    sort (score, happy);
    //delete the variables (makes the test scores worth nothing )
    delete []score;
    score=0;
    return 0;
}
//This next function will sort the array in ascending order
void sort (float * score, int happy){
    for (int x=0;x<happy-1;x++){
     for (int y=x+1;y<happy;y++){
         int temp;
         if (score[x]>score[y]){
             temp=score[x];
             score[x]=score[y];
             score[y]=temp;
         }
     }   
    }
    cout << "The scores from Greatest to Least: " << endl;
    for (int y=happy-1;y>=0; y--){
        cout << setw(20) << score[y] << "%" << endl;
    }
}

//This function performs the average score
void average (float * score, int happy, float total){
    int mercury; //Totals the average
    for (int x=0; x<happy; x++){
        total+=score[x];
    }
    mercury=total/happy;
    cout << fixed << showpoint << setprecision(2);
    cout << "Average Score: " << setw(2) << mercury << "%" << endl;
}