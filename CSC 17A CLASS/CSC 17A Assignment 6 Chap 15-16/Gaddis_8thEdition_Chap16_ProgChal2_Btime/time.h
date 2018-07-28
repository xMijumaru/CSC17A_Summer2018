 // Specification file for the Time class
 #ifndef TIME_H
 #define TIME_H

#include <iomanip>
#include <iostream>
#include <cstring>

using namespace std;

 class Time
 {
 protected:
 int hour;
 int min;
 int sec;
 int ap;
 public:
 // Default constructor
 Time()
 { hour = 0; min = 0; sec = 0; ap=0; }

 // Constructor
 Time(int h, int m, int s, int i)
 { hour = h; min = m; sec = s; ap=i; }

 // Accessor functions
 int getHour() const
 { return hour; }

 int getMin() const
 { return min; }

 int getSec() const
{ return sec; }
 
 
 string getap() const{
     if (ap==1){
         return "AM";
     }
     if (ap==2){
         return "PM";
     }
 }
  int milTime () const {
      if (ap==1){
         return hour;
     }
     if (ap==2){
         return hour+12;
     }
 }
 };

 
 #endif