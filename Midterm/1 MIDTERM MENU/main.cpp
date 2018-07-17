/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: kevin
 *
 * Created on July 14, 2018, 5:06 PM
 */


#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cstring>
#include <cctype>
using namespace std;

//Global Variables 
const int MM=300;//I am forced to put them on the global area because it gives
//me errors otherwise
struct info {
    char name[MM];//name of the account holder
    char add[MM]; //address of the person
    float bal;//the balance of the account
    int num;//the number of the account
};

struct write{
    float check;//amount of checks written
};
struct depo{
    float away;//amount of deposits that were made
};


struct emp{
    char name[MM];//determines the name of the employee
    int hours;//number of hours worked
    float pay;//the amount of pay
    float total;//total payment
};

//function prototypes
void input999(int &, const int);
void input1 ( int &, int);//prompts the user for the input
int input99 ();
void *declare (int, emp *);//declares the variable
void *print (int, emp * );//prints the amount
void *input (int &, int &, info *, int&);
void *insert (int, int , info *, depo *, write *, float &, float &);
void *print (int, int , info *, depo *, write *, float , float, int);
int Menu();//does the menu options
void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
void problem6();
void problem7();
void problem8();

int main(int argc, char** argv) {
int inN;
        do{
         inN=Menu();
         cout << endl;
         switch(inN){
          case 1:    problem1();break;
          case 2:    problem2();break;
          case 3:    problem3();break;
          case 4:    problem4();break;
          case 5:    problem5();break;
          //case 6:    problem6();break;
          //case 7:    problem7();break;
         }
         
        }while(inN<8);
        
    
    
    return 0;
}

int Menu (){
    int choice;
    cout << endl;
    cout << "Press 1 for Account Balance Problem" << endl;
    cout << "Press 2 for Paycheck Problem" << endl;
    cout << "Press 3 for Message Encryption" << endl;
    cout << "Press 4 for Message Decryption " << endl;
    cout << "Press 5 for Factorial " << endl;
    cout << "Press 6 for conversions " << endl;
    cout << "Press 7 for the Factor " << endl;
    cin >> choice;
    return choice;
}
void problem1 (){
    int amount2;//the amount of checks that were written
    int amount1; // the amount of deposits that were made
    int num;//account balance
    info person[1];
    info *s;//this is the pointer for the first variable
    s=person; //the information for the person
    depo *t;//counts all the deposits done
    write *u;//counts all the checks written
    float total1=0; //total for the deposits
    float total2=0;//total for the checks
    
    //Display inputs and outputs here
    input (amount1, amount2, s, num);//prompts the user to insert values
    t= new depo [amount1];
    u= new write [amount2];
    insert (amount1, amount2, s ,t , u, total1, total2);
    print (amount1, amount2, s ,t , u, total1, total2, num);
    
    //delete here
    delete []t;
    delete []u;
    t=nullptr;
    u=nullptr;
    
}
void *print(int amount1, int amount2, info *s, depo *t, write * u, float total1,
        float total2 , int num){
    cout << fixed << showpoint << setprecision(2);
    float last;//shows how much the total amount of money is
    float over=15.0;// the overdraft fee
    last=((total1-total2)+s->bal);
     last=s->bal+(total1-total2);
     cout << s->name << endl;
     cout << s->add << endl;
     cout << s->num << endl;
    if (last>=0){
        cout << "\nThe Account Balance on #" << s->num << " : ";
        cout << last;
    }
    else if (last<0){
        cout << "\nThe Account Balance on #" << s->num << " : ";
        cout << last-over;
        cout << "\nA $15.00 Overdraft fee has been debited to your account";
        cout << endl;
    }
}
void *insert (int amount1, int amount2, info *s, depo *t, write *u,
        float & total1, float & total2){
    for (int x=0;x<amount1;x++){
        cout << "Insert Deposit #" << x+1 << ": " ;
        cin >> t[x].away;
        total1+=t[x].away;
    }
    for (int x=0;x<amount2;x++){
        cout << "Insert Check Written #" <<x+1 << ": ";
        cin >> u[x].check;
        total2+=u[x].check;
    }
    
}

void *input (int & amount1, int & amount2, info *s, int & num){
    cout << "What is the name of the account holder : ";
    cin.ignore();
    cin.getline(s->name, MM);
    cout << "What is the Address of the person: " << endl;
    cin.getline (s->add, MM);
    cout << "What is the Account Balance of the holder: ";
    cin>>s->bal;
    cout << "What is the Bank Account Number: ";
    cin >>s->num;
    while (s->num<10000||s->num>99999){
        cout << "Account must be 5 digits, please try again: ";
        cin>>s->num;
    }
    cout << "How many deposits were made on to the account: ";
    cin>>amount1;
    cout << "How many checks were written: ";
    cin >> amount2;
}
void problem2(){
    //Declare the variables here
    int amount; // the amount of employees 
    emp *point1;//points to the value of the emp
    
    //Display inputs and outputs
    amount=input99();
    declare (amount, point1);
    
    
}

void *print (int amount, emp * point1){
    for (int x=0;x<amount;x++){
        cout << fixed << showpoint << setprecision(2);
        cout << "Company LLC." << endl;
        cout << "1234 Address RD. Los Angeles, CommieFornia, 90201" << endl;
        cout << point1[x].name << "  Amount: " << point1[x].total << endl; 
    }
}
void *declare (int amount, emp * point1){
    point1= new emp [amount];
    for (int x=0;x<amount;x++){
        cout << "Enter the Name for Employee " << x+1 << ": ";
        cin.ignore();
        cin.getline(point1[x].name, MM);
        cout << "Enter the amount of hours Worked for #" << x+1 <<" : " ;
        cin >> point1[x].hours;
        while (point1[x].hours<0){
            cout << "No Negative values again, please try again: ";
            cin >> point1[x].hours;
        }
        cout << "Enter the Pay Rate for #" << x+1 << ": ";
        cin >> point1[x].pay;
        while (point1[x].pay<0){
            cout << "No Negative values again, please try again: ";
            cin >> point1[x].pay;
        }
        cout << endl;
        //this part will do the calculation for the last one
        if (point1[x].hours<30){
            point1[x].total=(point1[x].pay*point1[x].hours);
        }
            else if (point1[x].hours>30&&point1[x].hours<50){
                point1[x].total=(point1[x].pay*30)+(((point1[x].hours-30)*
                        point1[x].pay)*2);
            }
            else if (point1[x].hours>50){
                point1[x].total=(point1[x].pay*30)+((point1[x].pay*20)*2)+
                        ((point1[x].hours-50)+point1[x].pay*3);
            }
        
    }
    print (amount, point1);
}
//the first function
int input99 (){
    int number;
    cout << "How many Employees are going to be calculated?: ";
    cin >> number;//number of employees
    return number;
}
void problem3(){
    //declare the variables here 
    const int max=4;//the character will keep 4 numbers
    int enter;//the number that will be entered to encrypt the data
    
    //Display output and inputs here
    input1 (enter, max);
    
}

void input1 (int & enter, int max){
    //Decalare the variables here 
    int encrypt;//encrypts the data
    cout << "Enter a 4 Digit Integer: ";
    cin >> enter;
    while (enter>9999||enter<1000){
        cout << "The number must be 4 Digits long, try again: ";
        cin >> enter;
    }
    int n1=enter/1000;
    int n2=(enter-(n1*1000))/100;
    int n3=((enter-(n1*1000)-(n2*100))/10);
    int n4=((enter-(n1*1000)-(n2*100)))-(n3*10);
    if (n1==8||n1==9||n2==8||n2==9||n3==8||n3==9||n4==8||n4==9){
        cout << "Number cannot contain 8 or 9" << endl;
    }
    else {
    int d1=(n1+5)%8;
    int d2=(n2+5)%8;
    int d3=(n3+5)%8;
    int d4=(n4+5)%8;
    encrypt=(d3*1000)+(d4*100)+(d1*10)+(d2);
        if (d1==8||d1==9||d2==8||d2==9||d3==8||d3==9||d4==8||d4==9){
            cout << "Number: " << encrypt << "has been flagged " << endl;
        }
        else{
            cout << "Encrypted Number: " << encrypt << endl;
        }
    }
}
void problem4(){
    const int max=4;//maximum amount of digits
    int input;//the input that the user will insert
    
    //Display inputs and outputs
    input999(input, max);
    
}

void input999(int & enter, const int max){
     int decrypt;//encrypts the data
    cout << "Enter a 4 Digit Integer: ";
    cin >> enter;
    while (enter>9999||enter<1000){
        cout << "The number must be 4 Digits long, try again: ";
        cin >> enter;
    }
    int n1=(enter/1000+3)%8;
    int n2=(enter%1000/100+3) %8;
    int n3=(enter%1000%100/10+3)%8;
    int n4=(enter%1000%100%10+3)%8;
    decrypt=(n3*1000)+(n4*100)+(n1*10)+(n2);
    cout << "Decrypted Number: " << decrypt;
    
}
void problem5(){
    cout << "Short:  7!"<< endl;
    cout <<"Unsigned Short: 7!" << endl;
    cout << "Int:    11!"<<endl;
    cout << "Long:  11! "<<endl;
    cout << "Float:  33!"<<endl;
    cout << "Double: 184!"<<endl;
    cout << "Bool:   1!"<<endl;
    cout << "Unsigned Char: 5!"<<endl;
    cout << "Char:    5!"<<endl;
    
   

    
}