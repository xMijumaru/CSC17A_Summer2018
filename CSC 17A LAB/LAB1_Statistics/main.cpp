/* 
 * File:   main.cpp
 * Author: kevr1
 *
 * Created on June 28, 2018, 9:03 PM
 */
//LAB ASSIGNMENT12345678901234567890123456789013456573245675342367958473625
//THIS PROGRAM CALCULATES THE MEAN MEDIAN AND MODE OF THE ARRAY IN PLACE
#include <cstdlib>
#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

//No global variables present

//Function prototypes
float *input (float *, int &);//This function prompts the user for the input
void PrtMean (float *, int );//prints out the mean
void PrtMedian (float *, int );//prints out the median
void PrtMode (float *, int);//prints out the mode 

int main(int argc, char** argv) {
//Declare the variables here
    float *array; //The array that will hold the elements of the array
    int enter;// The user will enter the size of the array that will be inputted
    float *mars; //This pointer will make it equal to the return function
    float average;//This will return the average of the array
    
    //Set Variable values
    array=nullptr;
    mars=nullptr;
    
    //Display the outputs here
    mars= input (array, enter);//makes it equal to the numbers that 
    //will be entered
    PrtMean(mars, enter);//This will call in the mean function
    PrtMedian(mars, enter);//This will call in the median function
    PrtMode(mars, enter);//This will call in the mode function
    
    return 0;
}
//The purpose of this function is to print out the mode of the array
void PrtMode (float * mars, int enter){
    int counter=1,max=0;
    int mode=mars[0];
    for(int i=0;i<enter;i++){
      if (mars[i]==mars[i+1]){
          mars++;
          if(counter>max){
              max=counter;
              mode=mars[i];
          }
      } else
          counter = 1;
    }
    cout<<"The mode is = "<<mode<<endl;
}
    


//The purpose of this function is to print out the median of the array
void PrtMedian (float * mars, int enter){
    //This part will check if the array has an odd amount of elements
    if (enter%2==1){
        //This part will find tha average
       int low=0;
       int high=enter-1;
       int middle=(low+high/2);
       cout << "The Median of the Array: " << mars[middle] << endl;
        
    }
    //This part will check for the senario when there are an even amount of 
    //variables
    if (enter %2==0){
        int low=0;//lowest element number
        int high=enter-1;//enters the highest element number
        int middle=(low+high/2);//Calculates the int value of the middle array
        //The answer variable will take the average of the 2 midpoints
        float answer=(mars[middle]+mars[middle+1])/2;
        
        //Display my output here
        cout << "The Median of the Array: " << answer << endl;
    }
}

//The purpose of this function is to print out the mean of the array
void PrtMean (float * mars, int enter){
    //The average should print out on this one
    float total;//The total sum of all the elements
    float mean;//This will fins the average
    
        for (int x=0;x<enter; x++){
            
            total+=*mars;//This will add the entire total
            mars++;
        }
    mean=total/enter;
    cout << fixed << showpoint << setprecision(2);
    cout << "The Mean of the Array: " << mean << endl;
}

//The purpose of the is function is to have the user input the size of the array
//and have them input the elements in the variables
float *input ( float * array, int & enter){
    //This will ask the user for the inputs
    cout << "Mean, Median, and Mode Program"<< endl;
    cout << "How many Elements will be inputted into the array: ";
    cin >> enter;
    array = new float [enter];
    //This part of the program will prompt the user to input the values of the
    //array
        for (int x=0; x<enter; x++){
            cout << "Enter Element #" << x+1 << ": ";
            cin >> *(array+x);
        } 
    
    //This will have the array return in order to make one pointer equal to the 
    //other
    return array;
}