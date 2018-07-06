/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: kevin ramos
 *
 * Created on June 25, 2018, 4:24 PM
 */
//This program will take in an array value, and shift it once across the 
//original array

#include <cstdlib>
#include <iostream>
using namespace std;
//Function prototypes
float *input1 (float *, int &);//The purpose of this function is to have the user
//input the first array
float *input2 (float *, float *, int); //The purpose of this function is to 
//input the second function
void display1 (float*, int);//This will display the first array
void display2(float *, int); //This function will recieve the pointers, and 
//cout them to the user

int main(int argc, char** argv) {
//Declare the variables here
    float *point1; // The first pointer value 
    float *point2; //The second pointer value
    int input; //The number that will be inputted by the user
    float *num1=nullptr; //Will point to the point1
    float *num2=nullptr; //Will point to the point2
    
  //Declare the variables here
    num1=input1(point1, input);//This variable will be equal to the first array
    
    display1(num1, input);//This function is designed to cout the original array
    
    num2=input2(num1, point2, input);//This Variable is designed to copy the 
    //first array into the second one, and adding the zero it is so desired to 
    //have
    
    display2(num2, input);//This function will display the value for the second
    //array
    
    //Delete the dynamically casted pointers in my program
    delete [] num1;
    delete [] num2;
    num1=nullptr;
    num2=nullptr;

    return 0;
}
//This function will display the value of the shifted element
void display2(float * num2, int input){
    cout << "\nThe New (Element Shifted) Array: ";
    for (int light=0;light<input+1;light++){
        cout << *(num2+light) << " ";
    }
    
}

//The purpose of this function is to copy one array into another, and adding its
//desired zero inside the array
float *input2 (float * mercury, float * jupiter, int input){
    int heute=input+1;
    jupiter=new float [heute];//The new variable needs an extra element in order
    //to carry the zero

    jupiter[0]=0;
    
    //the for loop that will execute the copying
    for (int space=0;space<input;space++){
        jupiter[space+1]=mercury[space];
    }
    return jupiter;
}

//The purpose of this here function is to cout the array
void display1 (float *num, int input){
    cout << "The Original Array: ";
    for (int output=0;output<input;output++){
        cout << *(num+output) << " ";
    }
}

//The purpose of this function is too have the user input the value of the array
//and have it displayed as the original array value
float *input1 (float * pointer, int &input){
    cout << "How many elements will the array be sized?: ";
        cin >> input;
     //The purpose of this is to size the value of the array
       pointer= new float [input];
       for (int x=0;x<input;x++){
           cout << "Input Element #" << x+1 << ": ";
           cin >> pointer[x];
       }
       return pointer;
}
