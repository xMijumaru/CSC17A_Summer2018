/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: kevr1
 *
 * Created on June 29, 2018, 9:29 PM
 */
//This function counts the amount of words that were typed into a sentence
#include <cstdlib>
#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;
// Function prototypes
void input (char [], const int );//prompts the users input
void print (char []);//This function will print out the final solution
int process (char []);//processes calculation

int main(int argc, char** argv) {
//Declare the variables here
    const int max=200; //The maximum amount of characters
    char sent[max];//The pointer that will point to the original variable

   //Display the outputs here
    input(sent, max);//The function that will return the pointer
    print (sent); //Prints out all the solutions
    
    return 0;
}
//The purpose of function is to perform the calculations
int process (char sent[]){
   int number=0;
   int total=strlen(sent);
   for (int x=0;x<=total;x++){
       if (sent[x]==' '||sent[x]=='\0'){
           number++;
       }
   }
    return number;
}
//The purpose of this function is to print all the outputs
void print (char sent []){
    int NumChar=strlen(sent);
    int NumWrd=process(sent);
    float average=(static_cast<float>(NumChar)-(NumWrd-1))
    /static_cast<float>(NumWrd);
    
   //process calculations here
    
cout << "The sentence that was inputted: " << endl;
cout << sent << endl;
cout << "\nThe Number of Characters: " << NumChar << endl;
cout << "The Number of Words: " << NumWrd << endl;
cout << "Average amount of chars in this sentence (relative to the words): ";
cout << fixed << showpoint << setprecision(2);
cout << average << endl;
}

//The purpose of this function is to have the user input the sentence
void input (char total[], const int max){
    cout << "WORD COUNTER" << endl;
    cout << "Enter the phrase you want to input (limit of 200 chars): " << endl;
    cin.getline (total, max);
    //Cin getline function is the primary function for inputting chars in a 
    //sentence
}
