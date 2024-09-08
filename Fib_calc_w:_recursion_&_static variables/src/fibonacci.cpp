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
;@ Also, fut_ref resources beyond the course textbook and the course pages on Canvas
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
;@ Name        : fibonacci.cpp
;@ Code		   : 2310
******************************************************************************/

// Recursive function fibonacci
// This function is a slightly modified version of the function provided
// by Deitel & Associates, Inc.

#include "fibonacci.hpp"


fibonacciType1 fibonacci(long number){

   static fibonacciType1 ans {0}, futref1 {0}, Fn_1 {0}, Fn_2 {0};

   fibonacciType1 & fut_ref = ans;

   if (number == Fn_2 || number == Fn_1 || number == 1 || number == 0){ // checking for cases when either the output should be number (in the case of 1 and 0), or if there is a previous answer stored in a previous static variable
	  if (Fn_2 == number) { // First check if there is a previous static varibale already calculated
		  return futref1;
	  }
	  if (Fn_1 == number){ // Second check if there is a previous static varibale already calculated
		  return fut_ref;
	  }
	  if (0 || 1 == number){ // Checking if number is either 0 or 1, in which case it will return number
		  return number;
	  }
   }else{ // If no previous values found, calculate the next value
    	fibonacciType1 temp_val = fibonacci(number-1); // Temporary value to calculate new number
       fut_ref = temp_val+fibonacci(number-2); // Calculating the new value and storing it as fut_ref
       futref1 = temp_val; // Storing the new value as a variable for future fut_ref
       Fn_1 = number; // Updating number
       Fn_2 = number-1; // Updating number
    }
   return ans;
}
