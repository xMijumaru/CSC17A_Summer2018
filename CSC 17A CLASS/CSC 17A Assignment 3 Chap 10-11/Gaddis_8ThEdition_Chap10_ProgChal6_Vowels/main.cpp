
/* 
 * File:   main.cpp
 * Author: kevr1
 *
 * Created on June 30, 2018, 3:00 PM
 */
//THIS PROGRAM CALCULATES THE VOWELS IN A STRING, THE NUMBER OF WORDS, THE
//NUMBER OF CONSTANTS, AND HAVE THE USER ENTER ANOTHER STRING, OR EXIT
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

//Function Prototypes
void input(char *, int );//Prompts the users input
void print (char *, int);//Prompts the printing
int vowel (char *, int );//Will count the vowel of the string
int Consonant (char *, int);//counts the amount of Consonants

int main(int argc, char** argv) {
//Declare the variables here
     char twice;//the y/n function to start the program again
    int max=300;//This is the maximum amount of chars that will be inputted
    char *total; //The variable that will have the array inserted
    total= new char [max];//The dynamically allocated array
   
    
    
//Display the outputs here
    input(total, max);//has the user input the phrase
    print (total, max);//Does all the printing
    
    //delete the variables here
     delete [] total;
     total=nullptr;

    return 0;
}
//The purpose of this function is to calculate the number of Consonants
int Consonant ( char * total, int vowels){
   //Display the variables here
    int sub=strlen(total);//The total value
    int con=0; //the final value
    int finals;//The total amount of Consonants that will be displayed
    //this will count the words(not including the last
    for (int x=0;x<=strlen(total);x++){
        if (total[x]==' '){
            con++;
        }
    }
    finals=sub-con-vowels;
    return finals;
}

//The purpose of this function is to find the amount of vowels in the string
int vowel(char * total, int max){
    //Declare the variables here
    int AEIOU=0;//Will count the amount of vowels
    //Display the outputs here
    for (int x=0; x<strlen(total);x++){
        //This function will count the number of vowels
        if (total[x]=='a'||total[x]=='A'||total[x]=='e'||total[x]=='E'
                ||total[x]=='i'||total[x]=='I'||total[x]=='o'||total[x]=='O'
                ||total[x]=='u'||total[x]=='U'){
            AEIOU++;
            
        }
    }
    return AEIOU;
}
//The purpose of this function is perform all the printing
void print (char * total, int max){
    //Declare the variables here
    int NumChar=strlen(total);
    int NumV= vowel(total, max);
    int NumC= Consonant (total, NumV);
    
    //Display all the outputs here
    cout << "The Original Sentence: " << endl;;
    cout << total << endl;
    cout << "\nThe Amount of Characters: ";
    cout << NumChar << endl;
    cout << "The Number of Vowels: ";
    cout << NumV << endl;
    cout << "The Number of Consonants: ";
    cout << NumC << endl;
}
//The purpose of this function is to have the user enter an input
void input (char *total, int max){
    cout << "Input a String/Phrase (Limit of 300 Chars): " << endl;
    cin.getline(total, max);
    //The cin.getline function will have the string entered and dynamically
    //store it
}