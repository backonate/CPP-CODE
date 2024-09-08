///******************************************************************************
//;@
//;@ Student Name 1: Behrad Rakhshanfar
//;@ Student 1 #: 301592450
//;@ Student 1 userid (email): bra46 (bra47@sfu.ca)
//;@
//;@ Student Name 2: Nathan Ding
//;@ Student 2 #: 301587175
//;@ Student 2 userid (email): nda71 (nda71@sfu.ca)
//;@
//;@ Below, edit to list any people who helped you with the code in this file,
//;@      or put ‘none’ if nobody helped (the two of) you.
//;@
//;@ Helpers: _everybody helped us/me with the assignment (list names or put ‘none’)__
//;@
//;@ Also, reference resources beyond the course textbook and the course pages on Canvas
//;@ that you used in making your submission.
//;@
//;@ Resources:  ___________
//;@
//;@% Instructions:
//;@ * Put your name(s), student number(s), userid(s) in the above section.
//;@ * Edit the "Helpers" line and "Resources" line.
//;@ * Your group name should be "A2_<userid1>_<userid2>" (eg. A2_stu1_stu2)
//;@ * Form groups as described at:  https://coursys.sfu.ca/docs/students
//;@ * Submit your file to coursys.sfu.ca
//;@
//;@ Name        : fibonacci.cpp
//;@ Code		   : 2310
//******************************************************************************/
//#include "fibonacci.hpp"
//
//// Recursive function fibonacci
//// This function is a slightly modified version of the function provided
//// by Deitel & Associates, Inc.
//
//fibonacciType1 fibonacci(fibonacciType1 number){
//   static fibonacciType1 ans {0}, Fn_1 {0}, val1 {0}, Fn_2 {0};
//   fibonacciType1 & reference = ans;
//
//   if (number == Fn_2 || number == Fn_1 || number == 1 || number == 0){
//	   if (Fn_2 == number) {
//		   return val1;
//	   }
//	   if (Fn_1 == number){
//		   return reference;
//	   }
//	   if (0 || 1 == number){
//		   return number;
//	   }
//   }
//    else{
//       fibonacciType1 temp_val = fibonacci(number-1);
//       reference = temp_val+fibonacci(number-2);
//       val1 = temp_val;
//       Fn_1 = number;
//       Fn_2 = number-1;
//    }
//   return ans;
//}
//
