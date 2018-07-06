/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: kevr1
 *
 * Created on June 20, 2018, 6:41 PM
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <vector>
#include <cstring>
#include <string>
using namespace std;

//Function prototypes
void prob1();//This function executes program 1
void prob2();//This function executes program 2
void prob3();//This function executes program 3
void prob4();//This function executes program 4
void prob5();//This function executes program 5
void prob6();//This function executes program 6
void prob7();//THis Function executes program 7
bool linear(int [], int, int);//This function does a linear search of the
float conversion(int); //Does the conversion for the temp table
//lottery numbers

int main(int argc, char** argv) {
//Declare all the variables here
    char again;//This will prompt the menu to start again
     int input;//The input that the user will input
 
    //Display input and output here
    cout << "Press 1 to execute Celsius Temperature Program" << endl;
    cout << "Press 2 to execute the Days in a Month Program" << endl;
    cout << "Press 3 to execute the Lottery Winner Program " << endl;
    cout << "Press 4 to execute the Temperature Table Program" << endl;
    cout << "Press 5 to execute the Currency conversion Program " << endl;
    cout << "Press 6 to execute the Organism population Increase program"
            << endl;
    cout << "Press 7 to execute the Monkey Business program " << endl;
    cout << "Press 8 to terminate the Program " << endl;
    cout << "Your Selection: ";
    cin >> input;
    //Checks the input in order to see if the input is valid
    while (input<1||input>8){
        
        cout << "\nInvalid Integer chosen, Please input the correct syntax: ";
        cin >> input;
    }
    //Display the outputs here
    switch (input){
        case 1:{
            prob1();
            break;
        }
        case 2:{
            prob2();
            break;
        }
        case 3: {
            prob3();
            break;
        }
        case 4: {
            prob4();
            break;
        }
        case 5:{
            prob5();
            break;
            
        }
        case 6:{
            prob6();
            break;
        }
        case 7:{
            prob7();
            break;
        }
    }//puts an end to the switch statement.
    if (input==8){
        cout << "\nTerminating the program" << endl;
    }
    return 0;
}
//Performs the conversion table
float conversion ( int x){
    float finals=0; //The answer that will be produced in the temperature
    
    finals = (static_cast<float>(x)-32)* 5/9;
    
    return finals;
}


//Performs the linear search for the lottery function
bool linear (int array[], int num, int lottery)
{
    for (int x=0;x<num;x++){
        if (lottery==array[x]){
            return true;
        }
    }
    return false;
}

//This function will execute problem 1
void prob1(){
 float input; //The Celsius temperature that will be converted into Fahrenheit
    float output; //The outputted value when the function is completed
    
    cout << "This is a Celsius to Fahrenheit conversion program" << endl;
    cout << "Enter the degrees you wish to convert (in Celsius): ";
    cin >> input;
    output = (9/5)*(input)+(32);
    cout << fixed << showpoint << setprecision(1);
    cout << "Converted Degrees: " << output << endl;     
}
//This function will execute the 2nd problem
void prob2(){
      int month; //The user will input the month 
    int year; //The user will input the year on here
    char happy; //in order for the user to restart this program
    
    do{
    //Display inputs and outputs here
    cout << "This program calculates the days of the month " << endl;
    cout << "Enter the month (1-12): ";
    cin >> month;
    while (month>12||month<=0){
        cout << endl;
        cout << "Your input you entered is invalid" << endl;
        cout << "Enter the month (1-12): ";
        cin >>month;
    }
    cout << "Enter the year of the month: ";
    cin >> year;
    
    //This switch statement will bring up every possible senario avaliable
    switch (month){
        case 1:
        {
            cout << "There are 31 Days in that month " << endl;
        break;
        }
        case 2:{
            if (year %100==0){
                if (year%400==0){
                    cout << "There are 29 days in this month" << endl;
                }
            }
            else if (year%4==0){
                cout << "There are 29 days in this month " << endl;
            }
            else {
                cout << "There are 27 days in this month" << endl;
            }
         break;   
        }
        case 3:{
            cout << "There are 30 Days in this month " << endl;
            break;
        }
        case 4:{
            cout << "There are 30 days in this month " << endl;
            break;
        }
        case 5: {
            cout << "There are 31 days in this month " << endl;
            break;
        }
        case 6:{
            cout << "There are 30 days in this month " << endl;
            break;
        }
        case 7:{
            cout << "There are 31 days in this month " << endl;
            break;
        }
        case 8:{
            cout << "There are 31 days in this month" << endl;
            break;
        }
        case 9:{
            cout << "There are 30 days in this month " << endl;
            break;
        }
        case 10:{
            cout << "There are 31 days in this month " << endl;
            break;
        }
        case 11:{
            cout << "There are 30 days in this month" << endl;
            break;
        }
        case 12:{
            cout << "There are 31 days in this month " << endl;
            break;
        }
    }//Lines up and shoots the switch statement putting it to an end
    
    cout << "Press Y if you wish to restart the program: ";
    cin>> happy;
    
    }while (happy=='Y'||happy=='y');
    
}
//This function will execute the 3rd problem
void prob3(){
      //Declare all Variables Here
    int lottery;//The weeks winning numbers that the user will input
    int size=10;// Size that will be passed on during the search
    const int num=10;//The 10 numbers that are inputted
    int array[num]={13579, 26791, 26792, 33445, 55555,
        62483, 77777, 79422, 85647, 93121};//the numbers to compare to
   bool results;
   
    //Input or initialize values Here
    cout << "Enter the five winning lottery numbers (exclude spaces): ";
    cin>>lottery;
    results=linear(array, 10, lottery);
    
    
    if (results==true) 
    {
        cout << "You won the lottery " << endl;
    }
    if(results==false){
        cout << "You did not win the lottery " << endl;
    }
 
}
//This function will execute the 4th problem
void prob4(){
    //Declare the variables here
    int mars= 20;//The max that the function will enter
    
    cout << fixed << showpoint << setprecision(2);
    cout << "This program converts the Fahrenheit temperature to Celsius";
    cout << "\nfrom 1 - 20 degrees" << endl;
    cout << endl; 
    cout << setw(1) << "Fahrenheit" << setw(10) << "Celsius" << endl;
    cout << "-----------------------" << endl;
    for (int x=1;x<=mars;x++){
        float ans=conversion(x);
        cout << setw(1) << x << setw(20) << ans << endl;
     }

}
//This function will execute the fifth problem
void prob5(){
     float dollar;
    float Euro=0.74;//The amount of Euros that is equal to the dollar
    float yen=98.93;//the amount of Yen that is equal to the dollar
    
    //Display inputs and outputs here
    cout << "This program converts US Dollars to Euro and Yen" << endl;
    cout << "Enter the amount of Dollars you want to convert: " << endl;
    cin >>dollar;
    float happy=(dollar * Euro);//holds the Euro conversion
    float soft=(dollar * yen);//This holds the value of the Yen
    
    cout << fixed << showpoint << setprecision(2);
    cout << "Euro Conversion: " << happy << endl;
    cout << "Yen Conversion:  " << soft << endl;
}
//This function will execute the sixth problem
void prob6(){
    float buggy;//The user will input the initial population that will see an 
    //increase
    float biggy; //The percentage growth of the population 
    int oldie;//This part will calculate how many days will the growth take 
    //place
    float saturn; //this variable will display the new population after every
    //calculation has been done;
    
    //Display inputs and outputs
    cout << "This program calculates the increasing growth of organisms" << endl;
    cout << "Enter the initial population size of the current organism: ";
    cin >> buggy;
    while (buggy<=0){
        cout << "Invalid entry, please enter another number: ";
        cin >> buggy;
    }
    cout << "Enter the population growth in percentages: ";
    cin >> biggy;
    while (biggy<=0){
        cout << "Invalid entry, please enter another number: ";
        cin >> biggy;
    }
    
    cout << "Enter the number of days that the population will increase: ";
    cin >> oldie;
    while (oldie <=1){
        cout << "Input must be greater than or equal to 2, Please"
                << "\n try another number: ";
        cin >> oldie;
    }
    float jupiter = biggy * (1e-2);//The purpose of Jupiter is to read in the 
    //value of the percentage variable, biggy, and convert it into a decimal
    //in order for the program to run its calculations
   
    cout << fixed << showpoint << setprecision (2);
    cout << "Bug Population Increases " << endl;
    
    //Calculation to be solved in this part of the program
    for (int vector =1; vector <=oldie; vector ++){
        saturn=(jupiter*buggy)+buggy;
        cout << "Day " << vector << ": " << saturn << endl;
        buggy=saturn;//In order to add the increase to the next day
    }
}
//This function will execute the seventh problem
void prob7(){
    //Declare the variables here
    const int mon=3; //The amount of monkeys that will equate to 3
    const int day=5; //The amount of weekdays that the monkeys will eat their food
    //for
    float array[mon][day]; //the array that will keep track
    float mercury; // The smallest planet will keep track of the minimum
    float jupiter; //The largest planet will keep the maximum
    int ave; //The average of the food eaten by the monkeys
    float total; //The total amount of food eaten all the monkeys 
    //Display inputs and outputs
    cout << "This is a Monkey Business Calculator " << endl;
    //reads in the total and the input
    for (int planet=0;planet<mon;planet++){
        for (int space=0; space<day;space++){
            cout << "Enter the amount of food eaten by Monkey " << planet + 1 
                    << " day " << space+1 << ": ";
            cin >> array[planet][space];
            total+=array[planet][space];
        }
    }
    mercury=array[0][0];
    jupiter=array[0][0];
    
   
    for (int a=0; a<mon; a++){//calculates the maximum
            //Set the parameters for the equation
        for (int b=0;b<day;b++){
            if (array[a][b] < mercury)
        { 
	 mercury = array[a][b];
        }
    if (array[a][b] > jupiter)
	{ 
	jupiter = array[a][b];
        }
                
        }
        
        
    }
   
    
    //All needed outputs
    cout << fixed << showpoint << setprecision(2);
    cout << "Total Amount of Food Eaten:   " << total << endl;
    cout << "Average Amount of Food Eaten: " << total/3 << endl;
    cout << "Maximum Amount Eaten:         " << jupiter << endl;
    cout << "Minimum Amount Eaten:         " << mercury << endl;
}