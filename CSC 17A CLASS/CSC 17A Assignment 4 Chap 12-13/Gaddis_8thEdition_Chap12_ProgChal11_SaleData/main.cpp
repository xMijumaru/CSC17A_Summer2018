/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: kevr1
 *
 * Created on July 7, 2018, 6:05 PM
 */

#include <cstdlib>
#include <iomanip>
#include <fstream>
#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;

//Declare all structures here
struct sale{
    string division;
    int quarter;
    float sales;
};
//Function prototypes
void enter (sale *, const int, string &, ofstream &);//has the user enter the 
//name of the folder they wish to be open, and will run the checks to see if it
//works
void enter2(sale *, const int, string, ofstream &);//runs the second checks
void print(sale *, const int, string, ofstream &);//prints out and copies

int main(int argc, char** argv) {
    //Declare the variables here
    ofstream out;//File that will be copied in to
    const int mars=4; //the amount of variables in each part of the structure
    sale coke[mars];//runs the sales figures
    string file; //creates the file for the user
  

    
    //Process inputs and outputs here
    enter (coke, mars, file, out);//calls the enter function
    enter2 (coke, mars, file, out);//calls the enter2 function
    print (coke, mars, file, out);//calls the print function
    
    //close the files here
    out.close();
    return 0;
}
//The purpose of this function is to print out and copy the results
void print (sale * coke, const int mars, string file, ofstream & out){
    for (int x=0; x< mars; x++){
        out << coke[x].division << " " <<"\n";
        for (int y=0;y<mars;y++){
            out << coke[y].quarter << " ";
            out << coke[y].sales << " " << "\n";
        }
    }
    cout << "Content has been copied to " << file << endl;
}
//The purpose of this function is to have the user do the second set of entries
void enter2 (sale * coke, const int mars, string file, ofstream & out){
    //Declare my variables here
    coke[0].division="North"; coke[0].quarter=1;
    coke[1].division="South"; coke[1].quarter=2;
    coke[2].division="East";  coke[2].quarter=3;
    coke[3].division="West";  coke[3].quarter=4;
    
    //Process inputs and outputs
    cout << endl;
    for (int x=0; x < mars; x++){
        cout << "Enter the Sales for " << coke[x].division << " division";
        for (int y = 0; y<mars ;y++){
            cout << " Quarter " << y+1 << ": ";
            cin >> coke[y].sales;
            while (coke[y].sales<0){
                cout << "NO numbers less than ZERO will be accepted";
                cout << "\nPlease try another input: ";
                cin >> coke[y].sales;
            }
            
        }
    }
}


//the purpose of this function is to take in the users inputs in regards to the 
//information
void enter (sale * coke, const int mars, string & file, ofstream& out){
    cout << "Sales number file copy program" << endl;
    cout << "Enter the name of an existing or new file (must end with " << endl;
    cout << "the proper ending, ex: '.txt', for existing files): ";
    cin >> file;
    //open file here and check for errors
    out.open (file);
    if (out.fail()){
        perror ("Input file");
    }
    
}
