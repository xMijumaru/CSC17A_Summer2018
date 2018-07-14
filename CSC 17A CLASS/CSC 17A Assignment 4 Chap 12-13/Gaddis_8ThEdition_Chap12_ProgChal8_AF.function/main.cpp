/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: kevr1
 *
 * Created on July 7, 2018, 10:40 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cctype>
#include <fstream>

using namespace std;


//Function prototypes
void arraytofile (string &,int *,  int);
void filetoarray (string,int *,  int);

int main(int argc, char** argv) {
//Declare the variables here
    const int max=10;//The maximum amount of ints allowed
    int array[]={1,2,3,4,5,6,7,8,9,0};//the size of the array
    int array2[max];
    int *s;//pointer to the array
    s = array;
    int *t;
    t= array2;
    
    string name;//the name of the array
  
    
    
    //process inputs and outputs here
    arraytofile (name, s, max);
    filetoarray (name, t, max );
    
    
    return 0;
}


//The purpose of this array is to open the file, read it in, and throw it into
//the character array
void filetoarray(string name, int *t, int max){
    fstream file1;
    file1.open(name, ios::out | ios::binary);
    
    for (int x=0;x<max;x++){
        file1.read(reinterpret_cast<char *>(t), sizeof (max));
    }
    file1.close();
   for (int x=0;x<max;x++){
        cout << s[x] << " ";
    }
    
}

//The purpose of this array is to open the specified file in binary mode
//and writes the contents to the file
void arraytofile (string& name, int *s,  int max){
    fstream file1;
    cout << "Which file do you want to read in : ";
    cin >> name;
    file1.open(name, ios::in | ios::binary);
    
    for (int x=0;x<max;x++){
    file1.write(reinterpret_cast<char *>(s), sizeof(max));
    }
    file1.close();
    
}