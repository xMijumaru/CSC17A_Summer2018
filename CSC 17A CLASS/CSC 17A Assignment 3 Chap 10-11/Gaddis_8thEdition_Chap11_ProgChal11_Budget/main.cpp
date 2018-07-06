/* 
 * File:   main.cpp
 * Author: kevr1
 *
 * Created on June 30, 2018, 9:53 PM
 */
//THIS FUNCTION WILL ANALYZE A BUDGET AND SEE IF THE PERSON WENT OVER

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

//structures
struct Budget {
    float housing;//the cost for housing
    float util;//the amount for utilities
    float expen;//The amount for household expenses
    float trans; //the amount for transportation
    float medical; //The amount on medical cost
    float insure; //The cost of insurance
    float fun;//The amount for entertainment
    float clothes;//The amount allocated to clothing
    float other; //The amount allocated for Miscellaneous 
};
//Function prototype
Budget input (Budget &);//This will input the budget
Budget compare (Budget, Budget);//will execute the comparisons
Budget print1 (Budget); //prints the original budget
Budget print2 (Budget);//prints out the amount that the person spent
Budget report1 (Budget, Budget);//prints out the report
Budget report2 (Budget, Budget);//prints out the part 2
Budget report3 (Budget, Budget);//prints out the last part

int main(int argc, char** argv) {
//Declare the variables here
    Budget max= {500.00, 150.00, 65.00, 50.00, 30.00, 100.00, 150.00, 75.00,
    50.00};//this declares the original structure that is the maximum
    Budget S;//the user will input the amount spent on each item
    
//process outputs
    input(S);//has the user input the values of the structure
    print1(max);//prints out the original budget
    print2(S);//prints the inputs
    report1 (max, S);//prints out the report
    report2 (max, S);//prints out part 2
    report3 (max, S);//prints out the last part
    
    return 0;
}

//This prints out the last part
Budget report3 (Budget max, Budget s){
     cout << "Clothing : ";
        if (max.clothes>s.clothes){
            cout << " Under by $" << max.clothes-s.clothes << endl;
        }
        else if (max.clothes<s.clothes){
            cout << "  Over by $" << s.clothes-max.clothes << endl;
        }
        else {
            cout << " EQUAL TO BUDGET" << endl;
        }
      cout << "Miscellaneous Items : ";
        if (max.other>s.other){
            cout << " Under by $" << max.other-s.other << endl;
        }
        else if (max.other<s.other){
            cout << "  Over by $" << s.other-max.other << endl;
        }
        else {
            cout << " EQUAL TO BUDGET" << endl;
        }
}
//The purpose of this function is to continue the printing
Budget report2 (Budget max, Budget s){
     cout << "Medical : ";
        if (max.medical>s.medical){
            cout << " Under by $" << max.medical-s.medical << endl;
        }
        else if (max.medical<s.medical){
            cout << "  Over by $" << s.medical-max.medical << endl;
        }
        else {
            cout << " EQUAL TO BUDGET" << endl;
        }
      cout << "Insurance : ";
        if (max.insure>s.insure){
            cout << " Under by $" << max.insure-s.insure << endl;
        }
        else if (max.insure<s.insure){
            cout << "  Over by $" << s.insure-max.insure << endl;
        }
        else {
            cout << " EQUAL TO BUDGET" << endl;
        }
       cout << "Entertainment : ";
        if (max.fun>s.fun){
            cout << " Under by $" << max.fun-s.fun << endl;
        }
        else if (max.fun<s.fun){
            cout << "  Over by $" << s.fun-max.fun << endl;
        }
        else {
            cout << " EQUAL TO BUDGET" << endl;
        }
     
}
//The purpose of this function is to print out a report
Budget report1 (Budget max, Budget s){
    cout << fixed << showpoint << setprecision(2);
    cout << "\nBudget Report " <<endl;
    cout << "Housing : ";
    if (max.housing>s.housing){
        cout << " Under by $" << max.housing-s.housing << endl;
    }
    else if (max.housing<s.housing){
        cout << "  Over by $" << s.housing-max.housing<<endl;
    }
    else {
        cout << " EQUAL TO BUDGET" << endl;
    }
    //Checks the utilities
        cout << "Utilities : ";
        if (max.util>s.util){
            cout << " Under by $" << max.util-s.util << endl;
        }
        else if (max.util<s.util){
            cout << "  Over by $" << s.util-max.util << endl;
        }
        else {
            cout << " EQUAL TO BUDGET" << endl;
        }
        //Checks the household expenses
         cout << "Household Expenses : ";
        if (max.expen>s.expen){
            cout << " Under by $" << max.expen-s.expen << endl;
        }
        else if (max.expen<s.expen){
            cout << "  Over by $" << s.expen-max.expen << endl;
        }
        else {
            cout << " EQUAL TO BUDGET" << endl;
          
            //checks for transportations
             cout << "Transportation : ";
        if (max.trans>s.trans){
            cout << " Under by $" << max.trans-s.trans << endl;
        }
        else if (max.trans<s.trans){
            cout << "  Over by $" << s.trans-max.trans << endl;
        }
        else {
            cout << " EQUAL TO BUDGET" << endl;
        }
       }
}
//The purpose of this function is to run the comparisons of the program
Budget print2(Budget max){
    cout << fixed << showpoint << setprecision(2);
    cout << "\nThe Amount Spent " << endl;
    cout << setw(1) << "Housing: ";
    cout << setw(18) << max.housing << endl;
    cout << setw(1) << "Utilities: ";
    cout << setw(16) << max.util << endl;
    cout << setw(1) << "Household Expenses: ";
    cout << setw(7) << max.housing << endl;
    cout << setw(1) << "Transportation: ";
    cout << setw(11) << max.trans << endl;
    cout << setw(1) << "Medical: ";
    cout << setw(18) << max.medical << endl;
    cout << setw(1) << "Insurance: ";
    cout << setw(16) << max.insure << endl;
    cout << setw(1) << "Entertainment: ";
    cout << setw(12) << max.fun << endl;
    cout << setw(1) << "Clothing: ";
    cout << setw(17) << max.clothes << endl;
    cout << setw(1) << "Miscellaneous Items: ";
    cout << setw(6) << max.other << endl;
}
//the purpose of this function is to return the original value
Budget print1 (Budget max){
    cout << fixed << showpoint << setprecision(2);
    cout << "\nThe Original Budget " << endl;
    cout << setw(1) << "Housing: ";
    cout << setw(18) << max.housing << endl;
    cout << setw(1) << "Utilities: ";
    cout << setw(16) << max.util << endl;
    cout << setw(1) << "Household Expenses: ";
    cout << setw(7) << max.housing << endl;
    cout << setw(1) << "Transportation: ";
    cout << setw(10) << max.trans << endl;
    cout << setw(1) << "Medical: ";
    cout << setw(17) << max.medical << endl;
    cout << setw(1) << "Insurance: ";
    cout << setw(16) << max.insure << endl;
    cout << setw(1) << "Entertainment: ";
    cout << setw(12) << max.fun << endl;
    cout << setw(1) << "Clothing: ";
    cout << setw(16) << max.clothes << endl;
    cout << setw(1) << "Miscellaneous Items: ";
    cout << setw(2) << max.other << endl;
}

//The purpose of this function is to have the user input the values
Budget input (Budget& s){
    cout << "Enter the Amount spent on Housing: ";
    cin>>s.housing;
    cout << "Enter the Amount spent on Utilities: ";
    cin >> s.util;
    cout << "Enter the Amount spent on Household Expenses: ";
    cin >> s.expen;
    cout << "Enter the Amount spent on Transportation: ";
    cin >> s.trans;
    cout << "Enter The Amount spent on Medical: ";
    cin >> s.medical;
    cout << "Enter the Amount spent on Insurance: ";
    cin >> s.insure;
    cout << "Enter the Amount spent on Entertainment: ";
    cin >> s.fun;
    cout << "Enter the Amount spent on Clothing: ";
    cin >> s.clothes;
    cout << "Enter the Amount spent on Miscellaneous Items: ";
    cin >> s.other;
}