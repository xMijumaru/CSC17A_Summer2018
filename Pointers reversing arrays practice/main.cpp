/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: kevr1
 *
 * Created on June 25, 2018, 4:11 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;


int main(int argc, char** argv) {
    int set [8]={5, 10, 15, 20, 25, 300, 35, 40};
    int *nums=set;//makes nums point to the array set
    
    //Display the numbers in the array
    cout << "The numbers in the array are " << endl;
    cout << *nums << " ";//Displays the first element of the array
    while (nums < &set[7]){
        //Advances to the next point in the element
        nums++;
        //Displays the value pointed to by the nums
        cout << *nums << " ";
    }
    //Displays the backwards option
    cout << "\nThe numbers set backward are: " << endl;
    cout << *nums << " "; //Displays the first element
    while (nums>set){
        //Move backwards to the previous element
        nums--;
        //Displays the value pointed by the num
        cout << *nums << " ";
    }
    return 0;
}

