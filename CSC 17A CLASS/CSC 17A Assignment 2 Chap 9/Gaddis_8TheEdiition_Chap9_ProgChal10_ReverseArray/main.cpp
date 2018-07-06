/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: kevr1
 *
 * Created on June 23, 2018, 9:14 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

//Function prototypes
void enter(int &);//The user will input the values on here
void inputCopy (float *, int, float *);//This function will have the user enter
void reverse (float *, int); //This function will reverse the value
//the input and will copy one into another

int main(int argc, char** argv) {
//Declare the variables here
    int amount; //The amount of variables that will be inputted
    float *array; //The array that will store the variables when inputted
    float *copy; ///The array that will be copied from the first and reversed
    
 //Display the outputs here
    enter (amount);//This part will have the user input the values into the 
    //arrays
    array=new float [amount];//Dynamically allocates the value of the array
    copy= new float [amount]; ///Also Dynamically allocates the values of the 
    //array
    inputCopy (array, amount, copy);//calls the function to input the variables
    // copy the arrays (THIS WILL ALSO PRINT IT)
    
    //Deleting the Dynamically allocated variables
    delete []array;
    array=0;
    delete []copy;
    copy=0;
    return 0;
    
}

//This function will have the use input the amount of variables that the array 
//will have
void enter (int &amount){
    cout << "How many numbers are going to be inputted into the array: ";
    cin >>amount;
}

//The user will input the numbers that belong in the array, and copies it 
void inputCopy ( float *array, int amount, float * copy ){
 //This part will have the user input the values of an array
    for (int x=0;x<amount;x++){
        cout << "Input Number #" << x+1 << ": ";
        cin>>array[x];
    }
 //This function will copy one array into another
    for (int y=0;y<amount;y++){
        copy[y]=array[y];
    }
    
    //Prints out the first array
    cout << "The Original Array: ";
    for (int x=0;x<amount;x++){
        cout << array[x] << " ";
    }
    //prints out the 2nd array (before it is reversed
    cout << "\nThe Copied Array (Un-reversed): ";
    for (int y=0; y< amount; y++){
        cout << copy[y] << " ";
    }
    cout << endl;
    
    //Reverses the function
    //x has to be x -1 because the first element stays put, while the other
    //ones move to the end
    cout << "The Copied Array (Reversed): ";
    int x=amount-1;
    for (int z=0;z<x; z++){
        float temp=copy[z];
        copy[z]=copy[x];
        copy[x]=temp;
        x--;
    }
    //prints out the reversed function
    for (int x=0;x<amount;x++){
        cout << *(copy+x) << " ";
    }

}
//Function is technically less than 50 lines so thats legal