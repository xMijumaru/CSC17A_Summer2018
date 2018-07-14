/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: kevr1
 *
 * Created on July 7, 2018, 10:06 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <cctype>
#include <cstring>
using namespace std;

//Function prototypes
void input(ifstream &, string &);
void print (ifstream &, string);

int main(int argc, char** argv) {
//Declare the variables here
    ifstream read; //Reads in the file 
    string choice; //prompts the user to make a choice
    
    //Declare the outputs here
    input (read, choice);
    print (read, choice);
    
    //close the files
    read.close();
    return 0;
}
//This function will output the solutions 
void print (ifstream & read, string choice){
    string temp;//temporary string to get the information
    cout << "Contents of " << choice << ": " << endl;
    if (read){
        //reads item into the file
        getline (read, temp);
        
        //continue with the next part
        while (read){
            //display the last item read
            cout << temp << endl;
            //read in the next item
            getline (read, temp);
        }
    }
}

//This program prompt the user to make a choice
void input (ifstream & read, string & choice){
    cout << "What is the name of the file you wish to read in: ";
    cin >> choice;
    //opens the file 
    read.open(choice);
    //checks to see if the file opens or if there is an error
    if (read.fail()){
        perror("Input file ");
    }
    else {
        cout << choice << " has been opened successfully" << endl;
    }
}
