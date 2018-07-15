/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 11, 2018, 7:45 PM
 * Purpose:  Driver program to test out the statistics problem.
 */

//Libraries
#include <iostream>//I/O
using namespace std;

//User Libraries
#include "Array.h"
#include "Stats.h"

//No Global Constants

//Function Prototypes I supply
Array *fillAry(int,int);        //Fill an array and put into a structure
void prntAry(const Array *,int);//Print the array 
int *copy(const int *,int);     //Copy the array
void mrkSort(int *,int);        //Sort an array
void prtStat(const Stats *);    //Print the structure
void rcvrMem(Array *);          //Recover memory from the Array Structure
void rcvrMem(Stats *);          //Recover memory from Statistics Structure

//Functions you are to supply
Stats *stat(const Array *);     //Find & store mean, median, & modes in structure

//Execution begins here
int main(int argc, char*argv[]) {
    //Declare variables and fill
    int arySize=8;//Array Size
    int modNum=10; //Number to control the modes (digits 0 to 9 allowed)
    Array *array=fillAry(arySize,modNum);
    
    //Print the initial array
    cout<<"Original Array"<<endl;
    prntAry(array,10);
    
    //Calculate some of the statistics
    Stats *stats=stat(array);
    
    //Print the statistics
    prtStat(stats);
    
    //Recover allocated memory
    rcvrMem(array);
    rcvrMem(stats);
    
    //Exit stage right
    return 0;
}

int *copy(const int *a,int n){
    //Declare and allocate an array
    //that is a c
    int *b=new int[n];
    //Fill
    for(int i=0;i<n;i++){
        b[i]=a[i];
    }
    //Return the copy
    return b;
}

void prtStat(const Stats *ary){
    cout<<endl;
    cout<<"The average of the array = "<<ary->avg<<endl;
    cout<<"The median of the array  = "<<ary->median<<endl;
    cout<<"The number of modes      = "<<
            ary->mode->size<<endl;
    cout<<"The max Frequency        = "<<
            ary->modFreq<<endl;
    if(ary->mode->size==0){
        cout<<"The mode set             = {null}"<<endl;
        return;
    }
    cout<<"The mode set             = {";
    for(int i=0;i<ary->mode->size-1;i++){
        cout<<ary->mode->data[i]<<",";
    }
    cout<<ary->mode->data[ary->mode->size-1]<<"}"<<endl;
}

void mrkSort(int *array,int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(array[j]<array[i]){
                int temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
}

void rcvrMem(Stats *stats){
    rcvrMem(stats->mode);
    delete stats;
}

void rcvrMem(Array *array){
    delete []array->data;
    delete array;
}

void prntAry(const Array *array,int perLine){
    //Output the array
    for(int i=0;i<array->size;i++){
        cout<<array->data[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

Array *fillAry(int n, int modNum){
    //Allocate memory
    Array *array=new Array;
    array->size=n;
    array->data=new int[array->size];
    
    //Fill the array with mod numbers
    for(int i=0;i<n;i++){
        array->data[i]=i%modNum;
    }
    
    //Exit function
    return array;
}

Stats *stat(const Array *array){
    //Non-working stub to be completed by the student
    cout<<endl<<"stat function to be completed by the student"<<endl;
    float total;
    Stats *stats=new Stats;
    stats->mode=new Array;
    stats->mode->size=0;
    int nModes=0;
    for (int x=0;x<array->size;x++){
        total+=array->data[x];
    }
    stats->avg=static_cast<float>(total)/static_cast<float>(array->size);
    if (array->size%2==1){
        int low=0;
        int high=array->size-1;
        int middle=(low+high/2);
        stats->median=array->data[middle];
    }
    if (array->size%2==0){
        int low=0;
        int high=array->size-1;
        int middle=(low+high/2);
        stats->median=(static_cast<float>(array->data[middle])+
                static_cast<float>(array->data[middle+1]))/2;
            
        }    
    cout << stats->median;
    stats->mode->data=new int[nModes];
    stats->modFreq=1;
    int max=0;
    int mode=array->data[0];
    for (int x=0;x<array->size;x++){
        if (array->data[x]==array->data[x+1]){
            stats->modFreq++;
            if (stats->modFreq>max){
                max=stats->modFreq;
                mode=array->data[x];
            }
        }
    }
    return stats;
}