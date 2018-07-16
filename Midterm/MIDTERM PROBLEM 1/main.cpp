/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: kevin
 *
 * Created on July 15, 2018, 10:01 PM
 */

#include <cstdlib>
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cstring>
#include <cctype>

const int MM=300; //max 
using namespace std;
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
void *input (int &, int &, info *, int&);
void *insert (int, int , info *, depo *, write *, float &, float &);
void *print (int, int , info *, depo *, write *, float , float, int);
int main(int argc, char** argv) {
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
    
    return 0;
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
