
/* 
 * File:   main.cpp
 * Author: kevr1
 *
 * Created on July 1, 2018, 3:03 PM
 */
//This function will show the speakers

#include <cstdlib>
#include <iostream>
#include <cstring>
#include <iomanip>
#include <string>
using namespace std;
const int MM=300;
//Structures
struct speaker{
    
    char name[MM]; //the name of the speaker
    char phone[MM]; //the number of the speaker
    char topic[MM]; //the topic of the person
    float fee; // the fee of the speaker
};
int menu (int);//makes the menu options
void info (speaker *, int);//takes in the info for the speakers
void print (speaker *, int);//print out the information
void edit (speaker *, int);//allows the edits for the speakers

//function prototypes
int main(int argc, char** argv) {
    //Declare all variables here
    const int amount=10;//the amount of speakers in the system
    speaker S[amount];//amount of speakers
    int choice; //the choice input
    int input; //inputs the choice
    
    //process outputs here
    do{
    input=menu(choice);
    switch (input){
        case 1:{
            info(S, amount);
            break;
        }
        case 2:{
            edit (S, amount);
            break;
        }
        case 3:{
            print (S, amount);
            break;
        }
    }
    }while (input=5);
    
    return 0;
}
//This function will do the edits
void edit (speaker *s, int max){
    int enter;// the speaker that will be inputed
    int x;//access the variable
    
    cout << "Which Speaker would you like to edit?: ";
    cin >>enter;
    while (enter<1||enter>10){
        cout << "Invalid input, please try again: ";
        cin >> enter;
        cout << endl;
    }
    x=enter-1;//this for the array to be able to understand
    cout << "Enter the Name for Speaker #" << enter <<": ";
    cin.ignore();
    cin.getline(s[x].name, MM);
    cout << "Enter the Telephone Number for Speaker #" << enter <<": ";
    cin.ignore();
    cin.getline(s[x].phone, MM);
    cout << "Enter the Speaking Topic for Speaker #" << enter << ": ";
    cin.ignore();
    cin.getline(s[x].topic, MM);
    cout << "Enter the Speaking Fee for Speaker #" << enter << ": ";
    cin.ignore();
    cin >> s[x].fee;
}

//This function will print out the function
void print (speaker *s, int max){
    for (int x=0; x<max; x++){
        cout << "Speaker # " << x+1 << ": ";
        cout << s[x].name << endl;
        cout << "Telephone Number: ";
         cout << s[x].phone << endl;       
        cout << "Speaking Topic: ";
        cout << s[x].topic << endl;
        cout << "Fee Charged: ";
        cout << s[x].fee << endl;
        cout << endl;
    }
    
}

//This function has the user enter the speaker information
void info (speaker * s, int max){
    for (int x=0;x<max;x++){
        cout <<"Please enter the Name of speaker "<<x+1 <<
                ": ";
        cin.ignore();
         cin.getline (s[x].name, MM);
         cout << "Enter the Telephone Number for Speaker " << x+1 << ": ";
         cin.ignore();
         cin.getline (s[x].phone, MM);
         cout << "Enter the Speaking Topic for Speaker " << x+1 << ": ";
         cin.ignore();
         cin.getline (s[x].topic, MM);
         cout << "Enter the Fee charged by Speaker " << x+1 << ": ";
         cin >> s[x].fee;
         cout << endl;
    }
}

//This function chooses the function and input
int menu (int choice){
    //process outputs here
    cout << "Press 1 to Enter the Speakers Information" << endl;
    cout << "Press 2 to Edit the Speakers Information" << endl;
    cout << "Press 3 to Print out the Output" << endl;
    cout << "Press 4 to exit the Menu" << endl;
    cin >> choice;
    while (choice<1||choice>4){
        cout << "Invalid input, please try again: ";
        cin >> choice;
    }
    return choice;
}
