/******************************************************************************
;@
;@ Student Name 1: Behrad Rakhshanfar
;@ Student 1 #: 301592450
;@ Student 1 userid (email): bra46 (bra46@sfu.ca)
;@
;@ Helpers: none
;@
;@ Resources: https://stackoverflow.com/questions/72120029/boostmultiprecisioncpp-int-acting-like-unsigned-long-long
;@
;@% Instructions:
;@ * Put your name(s), student number(s), userid(s) in the above section.
;@ * Edit the "Helpers" line and "Resources" line.
;@ * Your group name should be "A1_<userid1>_<userid2>" (eg. A1_stu1_stu2)
;@ * Form groups as described at:  https://courses.cs.sfu.ca/docs/students
;@ * Submit your file to courses.cs.sfu.ca
;@
;@ Name        : assign1.cpp
;@ Copyright:  Original portions copyright (c) 2023 W. Craig Scratchley, wcs (AT) sfu (DOT) ca
******************************************************************************/

#include <iostream>
#include <chrono>
#include <boost/multiprecision/cpp_int.hpp>//This library added in order to store numbers and prevent overflow

using namespace std;
using namespace std::chrono;

int main() {

   cout << "Do not change this line.  Enter a sequence of increasing Fibonacci subscripts and -1 to stop input." << endl;

   long f_n, f_n_1 = 1, f_n_2 = 0; //defining first terms of sequence

   int n = 2;
   int input;
   int new_input;

   cin >> input;//Enter a Fibonacci subscript into the program
   if (input < -1){//condition for invalid Fibonacci numbers since numbers below 0 are not part of the Fibonacci sequence, and because -1 makes the program run to section 2
      cout << "Invalid subscript! Exiting program.";
      return 128;
   }

   while (input > -1){ //When the input is a valid  subscript the following loop is enacted
      cout << input << "\n";//Fibonacci subscript inputted is printed

      if (input == 1){//If the input is 1, the output value (f_n) is reassigned with (f_n_1)
         f_n = f_n_1;
      }
      else{//If it is anything other than 1, the following loop will go
         while (n <= input){//Until n is <= the Fibonacci subscript you entered, the following loop will run
            f_n = f_n_1 + f_n_2;//Formula for Fibonacci sequence
            n++;
            f_n_2 = f_n_1;//Reassigning values in order to calculate next Fibonacci number
            f_n_1 = f_n;
         }
      }
      cout << f_n << "\n";//Output value of the wanted Fibonacci subscript will be printed once n is <= the input(Fibonacci subscript entered)
      cin >> new_input;//The addition of new_input allows the user to put in another Fibonacci subscript they want to be calculated, while being evaluated for the following
      if (new_input <= input && new_input != -1){//Checks to see if the next subscript entered is increasing or not
         cout << "Invalid subscript! Exiting program.";
         return 128;
      }
      else {
         input = new_input;//Reassigning input if it is an increasing subscript in order to run in the loop again
      }
   }

   const int runLimit{4}; // generate Fibonacci numbers for runLimit more seconds

   time_point<steady_clock> start = steady_clock::now();

   n--;
   time_point<steady_clock> endTime = runLimit*1s + start; // calculate end time
   do {
      f_n = f_n_1 + f_n_2;//For duration of 'endTime', highest possible accurate Fibonacci subscript will be calculated
      n++;
      f_n_2 = f_n_1;
      f_n_1 = f_n;
   } while(steady_clock::now() < endTime); //After this section runs for 4 seconds or when (steady_clock::now() < endTime) it will stop calculating subscripts

   cout <<  n << endl;//The highest subscript reached is printed

   return 1;
}
