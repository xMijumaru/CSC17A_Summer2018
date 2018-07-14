
/* 
 * File:   main.cpp
 * Author: kevr1
 *
 * Created on July 6, 2018, 3:05 PM
 */
//THIS PROGRAM IS A SENTENCE FILTER AND WILL ASK THE FILE NAME
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <cstring>
#include <cctype>
#include <string>

using namespace std;

//Function Prototypes
void input (string &, string &);//function==userinputs
void check(ifstream &, ofstream &, string, string);//this function will open the 
//files
void work (ifstream &, ofstream &, string, string);//does the work for the 
//sentence

int main(int argc, char** argv) {
//Declare variables here
    string num1, num2; //The user will be prompt to enter 2 file names
    ifstream file1; //the file that will do the reading
    ofstream file2; //The file that will do the outputting and editing
    
    
    //Process outputs here
    input (num1, num2);//calls the input function
    check (file1, file2, num1, num2);//calls the check function
    work (file1, file2, num1, num2);//will perform the work
    
    
    //Close the files
    file1.close();
    file2.close();
    
    return 0;
    
}
//The purpose of this function is to do the calculations
void work (ifstream &file1, ofstream& file2, string num1, string num2){
    //Declare the variables here
    string kuiper;  //The string that will be used as parameters
    char nova;  //This part will take in a character
    
    //Declare the outputs here 
    file1.get(nova);    //grabs the first variable
    file2.put(toupper(nova));//changes the variable to an uppercase letter
    file1.get(nova);//grabs the variable 
    
    //This process the calculations
    while (!(file1.eof())){//will change the other variables 
        file2.put(tolower(nova));
        file1.get(nova);
    }
    
    cout << num1 << " Has been edited and stored onto " << num2 << endl;
}

//The purpose of this function is to open the files and check if they work
void check (ifstream &file1, ofstream &file2, string num1, string num2){
    file1.open(num1, ios::out);//opens the input file
    file2.open(num2);//opens the output file
   int count=0;
   //checks to see if the files failed to open
    if (file1.fail()){
        perror("Input file");
        
    }
    if (file2.fail()){
        perror("Output file");
       
    }
 
}
//this function is meant to have the user type in the parameters
void input (string & num1, string & num2){
    cout << "(neptune.txt and mars.txt have been saved as a temp. input file)";
    cout << "\nEnter the Input File Name (ex. file.txt):  ";
        cin >> num1;
    cout << "Enter the Output file Name (ex. File.txt): ";
        cin >> num2;
    
}


