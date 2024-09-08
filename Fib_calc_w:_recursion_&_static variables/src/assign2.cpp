/******************************************************************************
;@
;@ Student Name 1: student1
;@ Student 1 #: 123456781
;@ Student 1 userid (email): stu1 (stu1@sfu.ca)
;@
;@ Student Name 2: student2
;@ Student 2 #: 123456782
;@ Student 2 userid (email): stu2 (stu2@sfu.ca)
;@
;@ Below, edit to list any people who helped you with the code in this file,
;@      or put ‘none’ if nobody helped (the two of) you.
;@
;@ Helpers: _everybody helped us/me with the assignment (list names or put ‘none’)__
;@
;@ Also, reference resources beyond the course textbook and the course pages on Canvas
;@ that you used in making your submission.
;@
;@ Resources:  ___________
;@
;@% Instructions:
;@ * Put your name(s), student number(s), userid(s) in the above section.
;@ * Edit the "Helpers" line and "Resources" line.
;@ * Your group name should be "A2_<userid1>_<userid2>" (eg. A2_stu1_stu2)
;@ * Form groups as described at:  https://coursys.sfu.ca/docs/students
;@ * Submit your file to coursys.sfu.ca
;@
;@ Name        : assign2.cpp
;@ Code		   : 2310
;@ Original Portions Copyright (c) 2023 -- W. Craig Scratchley -- wcs (AT) sfu (DOT) ca
******************************************************************************/
// fibonacci program using recursion

#include <iostream>
#include <chrono>
#include "InfInt.h"

#include "fibonacci.hpp"
#include "templates.hpp"

using namespace std;
using namespace std::chrono;

using fibonacciType2 = InfInt;  // create an alias declaration (a type alias)

// do not modify the below line
int assign2_code{2310};

int main() {
   long subscript{-1};

   // Section 1
   cout << "Do not change this line.  Enter a sequence of increasing Fibonacci subscripts and -1 to stop input." << endl;
   // a loop to input Fibonacci subscripts and calculate Fibonacci numbers, or input -1 to stop input
   for ( long n;
         cin >> n
         ,
         -1 != n;
         ) {
      if (n <= subscript) {
         cout << "Invalid subscript!  Exiting program." << endl;
         return 128;
      }
      subscript = n;
      cout << subscript << endl;

      //cout << fibonacci(subscript) << endl;
      cout << fibonacci<fibonacciType1>(subscript) << "\n"; // eventually substitute in this line for the one above
   }

   {
      // Section 2
      const int runLimit{4}; // generate Fibonacci numbers for runLimit more seconds

      time_point<steady_clock> start{steady_clock::now()};

      time_point<steady_clock> endTime{runLimit*1s + start}; // calculate end time
      do {
         // generate more Fibonacci numbers.

        fibonacci(++subscript);
        //fibonacci<fibonacciType2>(++subscript); // eventually substitute in this line for the one above
      } while(steady_clock::now() < endTime); // true if endTime has not been reached yet

      // output the highest Fibonacci subscript calculated
      cout << subscript << endl;
      cout << fibonacci<fibonacciType2>(subscript) << endl;
   }
   return 1;
}
