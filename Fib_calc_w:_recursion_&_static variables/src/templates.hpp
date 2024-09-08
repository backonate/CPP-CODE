/******************************************************************************
;@
;@ Student Name 1: nda71
;@ Student 1 #: 301587175
;@ Student 1 userid (email): nda71 (nda71@sfu.ca)
;@
;@ Student Name 2: Behrad Rakshanfar
;@ Student 2 #: 301592450
;@ Student 2 userid (email): bra46 (bra46@sfu.ca)
;@
;@ Below, edit to list any people who helped you with the code in this file,
;@      or put ‘none’ if nobody helped (the two of) you.
;@
;@ Helpers: _everybody helped us/me with the assignment (list names or put ‘none’) none
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
;@ Name        : templates.hpp
;@ Code		   : 2310
******************************************************************************/

#pragma once
#include "InfInt.h"

// do not modify the below line
inline int templates_code{2310};


// *** put templates here ***
template <typename fibonacciType> // Creating template with typename fibonacciType

fibonacciType fibonacci(fibonacciType number){

   static fibonacciType ans {0}, reference1 {0}, Fn_1 {0}, Fn_2 {0};

   fibonacciType & reference = ans;

   if (number == Fn_2 || number == Fn_1 || number == 1 || number == 0){ // checking for cases when either the output should be number (in the case of 1 and 0), or if there is a previous answer stored in a previous static variable
	  if (Fn_2 == number) { // First check if there is a previous static varibale already calculated
		  return reference1;
	  }
	  if (Fn_1 == number){ // Second check if there is a previous static varibale already calculated
		  return reference;
	  }
	  if (0 || 1 == number){ // Checking if number is either 0 or 1, in which case it will return number
		  return number;
	  }
   }else{
	   fibonacciType temp_val = fibonacci<fibonacciType>(number-1); // Temporary value to calculate new number
       reference = temp_val+fibonacci<fibonacciType>(number-2); // Calculating the new value and storing it as reference
       reference1 = temp_val; // Storing the new value as a variable for future reference
       Fn_1 = number; // Updating number
       Fn_2 = number-1; // Updating number
    }
   return ans;
}
