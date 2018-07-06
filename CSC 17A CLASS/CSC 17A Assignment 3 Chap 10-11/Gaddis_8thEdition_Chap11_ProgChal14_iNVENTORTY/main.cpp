/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: kevr1
 *
 * Created on July 1, 2018, 7:51 PM
 */
//VENDING MACHINE INVENTORY ADD AND SUBTRACT PROGRAM
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

//Structures
struct part{
    int valve;//keeps track of the valve 
    int bearing;//keeps track of the bearing
    int bushing;//keeps track of the bushing
    int coup;//keeps track of the coupling
    int flange;//keeps track of the flange
    int gear;//keeps track of the gear
    int gearH;//keeps track of the gear housing
    int vacuum;//keeps track of the vacuum gripper
    int cable;//keeps track of the cable
    int rod;//keeps track of the rod
};
//Function prototypes
void display (part *);//displays the current inventory
int menu (int &);//displays the menu of options
void switches (int );//performs the switch option
void add (part *);//adds the inventory
void Sub (part * );//does the subtracting
void choiceAdd (part *, int );//adds
void choiceSub (part *, int );//subtracts

int main(int argc, char** argv) {
//Declare the Variables here
    part s={10, 5, 15, 21, 7, 5, 5, 25, 18, 12};
    part *invent=&s;//checks the inventory
    int choice;//the person will choose an option on the menu
    int option; //the option will be returned to the function
    int end;
    //Display outputs
    while (option!=4) {
    option=menu(choice);//displays the menu
    
    switch (option){
        case 1:{
            display (invent);
            break;
        }
        case 2: {
            add (invent);
            break;
        }
        case 3:{
            Sub(invent);
            break;
        }
        case 4:{
            cout << "Terminating Program" << endl;
           
            break;
        }
    }
    }
    
    return 0;
}

//The purpose of this function is too subtract any parts to the inventory
void Sub(part *s){
    int option;
    cout << "Which part would you like to Subtract?" << endl;
    cout << "1) Valve" << endl;
    cout << "2) Bearing" << endl;
    cout << "3) Bushing" << endl;
    cout << "4) Coupling" << endl;
    cout << "5) Flange " << endl;
    cout << "6) Gear " << endl;
    cout << "7) Gear Housing " << endl;
    cout << "8) Vacuum Gripper " << endl;
    cout << "9) Cable " << endl;
    cout << "10) Rod   " << endl;
    cin >> option;
    choiceSub(s, option);
}

//The purpose of this function is too add any parts to the inventory
void add(part *s){
    int option;
    cout << "Which part would you like to add?" << endl;
    cout << "1) Valve" << endl;
    cout << "2) Bearing" << endl;
    cout << "3) Bushing" << endl;
    cout << "4) Coupling" << endl;
    cout << "5) Flange " << endl;
    cout << "6) Gear " << endl;
    cout << "7) Gear Housing " << endl;
    cout << "8) Vacuum Gripper " << endl;
    cout << "9) Cable " << endl;
    cout << "10) Rod   " << endl;
    cin >> option;
    choiceAdd(s, option);
}
//The purpose of this function is to display the menu
int menu (int & choice){
   
    cout << "Press 1 to Display the Current Inventory" << endl;
    cout << "Press 2 to Add Parts " << endl;
    cout << "Press 3 to Delete Parts" << endl;
    cout << "Press 4 to End the program" << endl;
           
       if (!( cin >> choice)){
           cin.clear();
           cin.ignore(9999,'\n');
       }
    while (choice>4||choice<1){
        cout << "Invalid Option Chosen, please input another option: " ;
        if (!(cin>>choice)){
            cin.clear();
            cin.ignore (9999,'\n');
        }
    }
    return choice;
}

//The purpose of this function is to display the original value
void display (part * s){
    //display the outputs here
    cout << fixed << showpoint;
    cout << setw(30) << "The Current Inventory" << endl;
    cout << "-------------------------------------------------" << endl;
    cout << setw(5) << "Part Description ";
    cout << setw(25) << "Numbers of Parts in " << "the Bin" << endl;
    cout << setw(5) << "Valve:    " << setw(20) <<  s->valve << endl;
    cout << setw(5) << "Bearing:  " << setw(20) << s->bearing << endl;
    cout << setw(5) << "Bushing:  " << setw(20) << s->bushing << endl;
    cout << setw(5) << "Coupling: " << setw(20) << s->coup << endl;
    cout << setw(5) << "Flange:   " << setw(20) << s->flange << endl;
    cout << setw(5) << "Gear:     " << setw(20) << s->gear << endl;
    cout << setw(5) << "Gear Housing: " << setw(16) << s->gearH << endl;
    cout << setw(5) << "Vacuum Gripper: " << setw(14) << s->vacuum << endl;
    cout << setw(5) << "Cable:    " << setw(20) << s->cable << endl;
    cout << setw(5) << "Rod:      " << setw(20) << s->rod << endl;
     cout << "-------------------------------------------------" << endl;
}

//The purpose of this function is to add the parts
void choiceAdd (part * s, int option){
    int amount;
    if (option==1){//this checks for the first option
        cout << "How much would you like to add: ";
        cin >> amount;
        if (s->valve+amount<=30){
            s->valve+=amount;
            cout << "\nAmount added " << endl;
            cout << endl;
        }
        else {
            cout << "\nCommand failed. Bin cannot exceed 30 items" << endl;
            cout << endl;
        }
    }
    if (option==2){//this checks for the 2 option
        cout << "How much would you like to add: ";
        cin >> amount;
        if (s->bearing+amount<=30){
            s->bearing+=amount;
            cout << "\nAmount added " << endl;
            cout << endl;
        }
        else {
            cout << "\nCommand failed. Bin cannot exceed 30 items" << endl;
            cout << endl;
        }
    }
    if (option==3){//this checks for the 3 option
        cout << "How much would you like to add: ";
        cin >> amount;
        if (s->bushing+amount<=30){
            s->bushing+=amount;
            cout << "\nAmount added " << endl;
            cout << endl;
        }
        else {
            cout << "\nCommand failed. Bin cannot exceed 30 items" << endl;
            cout << endl;
        }
        
    }
    if (option==4){//this checks for the first option
        cout << "How much would you like to add: ";
        cin >> amount;
        if (s->coup+amount<=30){
            s->coup+=amount;
            cout << "\nAmount added " << endl;
            cout << endl;
        }
        else {
            cout << "\nCommand failed. Bin cannot exceed 30 items" << endl;
            cout << endl;
        }
    }
    if (option==5){//this checks for the first option
        cout << "How much would you like to add: ";
        cin >> amount;
        if (s->flange+amount<=30){
            s->flange+=amount;
            cout << "\nAmount added " << endl;
            cout << endl;
        }
        else {
            cout << "\nCommand failed. Bin cannot exceed 30 items" << endl;
            cout << endl;
        }
    }
     if (option==6){//this checks for the first option
        cout << "How much would you like to add: ";
        cin >> amount;
        if (s->gear+amount<=30){
            s->gear+=amount;
            cout << "\nAmount added " << endl;
            cout << endl;
        }
        else {
            cout << "\nCommand failed. Bin cannot exceed 30 items" << endl;
            cout << endl;
        }
    }
     if (option==7){//this checks for the first option
        cout << "How much would you like to add: ";
        cin >> amount;
        if (s->gearH+amount<=30){
            s->gearH+=amount;
            cout << "\nAmount added " << endl;
            cout << endl;
        }
        else {
            cout << "\nCommand failed. Bin cannot exceed 30 items" << endl;
            cout << endl;
        }
    }
     if (option==8){//this checks for the first option
        cout << "How much would you like to add: ";
        cin >> amount;
        if (s->vacuum+amount<=30){
            s->vacuum+=amount;
            cout << "\nAmount added " << endl;
            cout << endl;
        }
        else {
            cout << "\nCommand failed. Bin cannot exceed 30 items" << endl;
            cout << endl;
        }
    }
     if (option==9){//this checks for the first option
        cout << "How much would you like to add: ";
        cin >> amount;
        if (s->cable+amount<=30){
            s->cable+=amount;
            cout << "\nAmount added " << endl;
            cout << endl;
        }
        else {
            cout << "\nCommand failed. Bin cannot exceed 30 items" << endl;
            cout << endl;
        }
    }
     if (option==10){//this checks for the first option
        cout << "How much would you like to add: ";
        cin >> amount;
        if (s->rod+amount<=30){
            s->rod+=amount;
            cout << "\nAmount added " << endl;
            cout << endl;
        }
        else {
            cout << "\nCommand failed. Bin cannot exceed 30 items" << endl;
            cout << endl;
        }
    }
}

//The purpose of this function is to add the parts
void choiceSub (part * s, int option){
    int amount;
    if (option==1){//this checks for the first option
        cout << "How much would you like to Subtract: ";
        cin >> amount;
        if (s->valve-amount>=0){
            s->valve-=amount;
            cout << "\nAmount subtracted " << endl;
            cout << endl;
        }
        else {
            cout << "\nCommand failed. Bin cannot be less than 0" << endl;
            cout << endl;
        }
    }
    if (option==2){//this checks for the first option
        cout << "How much would you like to Subtract: ";
        cin >> amount;
        if (s->bearing-amount>=0){
            s->bearing-=amount;
            cout << "\nAmount subtracted " << endl;
            cout << endl;
        }
        else {
            cout << "\nCommand failed. Bin cannot be less than 0" << endl;
            cout << endl;
        }
    }
    if (option==3){//this checks for the first option
        cout << "How much would you like to Subtract: ";
        cin >> amount;
        if (s->bushing-amount>=0){
            s->bushing-=amount;
            cout << "\nAmount subtracted " << endl;
            cout << endl;
        }
        else {
            cout << "\nCommand failed. Bin cannot be less than 0" << endl;
            cout << endl;
        }
    }
    if (option==4){//this checks for the first option
        cout << "How much would you like to Subtract: ";
        cin >> amount;
        if (s->coup-amount>=0){
            s->coup-=amount;
            cout << "\nAmount subtracted " << endl;
            cout << endl;
        }
        else {
            cout << "\nCommand failed. Bin cannot be less than 0" << endl;
            cout << endl;
        }
    }
    if (option==5){//this checks for the first option
        cout << "How much would you like to Subtract: ";
        cin >> amount;
        if (s->flange-amount>=0){
            s->flange-=amount;
            cout << "\nAmount subtracted " << endl;
            cout << endl;
        }
        else {
            cout << "\nCommand failed. Bin cannot be less than 0" << endl;
            cout << endl;
        }
    }
    if (option==6){//this checks for the first option
        cout << "How much would you like to Subtract: ";
        cin >> amount;
        if (s->gear-amount>=0){
            s->gear-=amount;
            cout << "\nAmount subtracted " << endl;
            cout << endl;
        }
        else {
            cout << "\nCommand failed. Bin cannot be less than 0" << endl;
            cout << endl;
        }
        
    }
    if (option==7){//this checks for the first option
        cout << "How much would you like to Subtract: ";
        cin >> amount;
        if (s->gearH-amount>=0){
            s->gearH-=amount;
            cout << "\nAmount subtracted " << endl;
            cout << endl;
        }
        else {
            cout << "\nCommand failed. Bin cannot be less than 0" << endl;
            cout << endl;
        }
    }
    if (option==8){//this checks for the first option
        cout << "How much would you like to Subtract: ";
        cin >> amount;
        if (s->vacuum-amount>=0){
            s->vacuum-=amount;
            cout << "\nAmount subtracted " << endl;
            cout << endl;
        }
        else {
            cout << "\nCommand failed. Bin cannot be less than 0" << endl;
            cout << endl;
        }
    }
    if (option==9){//this checks for the first option
        cout << "How much would you like to Subtract: ";
        cin >> amount;
        if (s->cable-amount>=0){
            s->cable-=amount;
            cout << "\nAmount subtracted " << endl;
            cout << endl;
        }
        else {
            cout << "\nCommand failed. Bin cannot be less than 0" << endl;
            cout << endl;
        }
    }
    if (option==10){//this checks for the first option
        cout << "How much would you like to Subtract: ";
        cin >> amount;
        if (s->rod-amount>=0){
            s->rod-=amount;
            cout << "\nAmount subtracted " << endl;
            cout << endl;
        }
        else {
            cout << "\nCommand failed. Bin cannot be less than 0" << endl;
            cout << endl;
        }
    }
}
