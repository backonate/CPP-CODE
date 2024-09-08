/******************************************************************************
;@
;@ Student Name 1: Behrad Rakhshanfar
;@ Student 1 #: 301592450
;@ Student 1 userid (email): bra46 (bra46@sfu.ca)
;@
;@ Student Name 2: Nathan Ding
;@ Student 2 #: 301587175
;@ Student 2 userid (email): nda71 (nda71@sfu.ca)
;@
;@ Below, edit to list any people who helped you with the code in this file and also DaysOfChristmas_smallCode.cpp,
;@      or put â€˜noneâ€™ if nobody helped (the two of) you.
;@
;@ Helpers: none
;@
;@ Also, reference resources beyond the course textbook and the course pages on Canvas
;@ that you used in making your submission (including both .cpp files).
;@
;@ Resources:  ___________
;@
;@% Instructions:
;@ * Put your name(s), student number(s), userid(s) in the above section.
;@ * Edit the "Helpers" line and "Resources" line.
;@ * Your group name should be "A3_<userid1>_<userid2>" (eg. A2_stu1_stu2)
;@ * Form groups as described at:  https://coursys.sfu.ca/docs/students
;@ * Submit your file to coursys.sfu.ca
;@
;@ Name        : fibonacci.cpp
;@ Code        : 1237
******************************************************************************/

#include <iostream>


void DaysOfChristmas_switch ( void ) {
// This function must output to standard output the lyrics for "The 12 Days of Christmas".
// To get a good grade the lyrics must exactly match the lyrics in the file "The 12 Days of Christmas.txt"
// You must use a non-trivial switch statement in your code.

// remove the line below.
//std::cout << "<Lyrics start here ...>" << std::endl;
using namespace std;
unsigned long long i;

cout<<"The 12 Days of Christmas";


	for (i=1;i<=12;i++) {

		cout<< "\n\non the ";

		if (i>=4){
			cout<<i<<"th";
		}

		if (i==3){
			cout<<"3rd";
		}

		if (i==2){
			cout<<"2nd";
		}

		if (i==1){
			cout<<"1st";
		}

		cout << " day of Christmas\nmy true love sent to me:"<<endl;

		switch (i) {
			case 12:
				cout<<"12 Drummers Drumming"<<endl;

			case 11:
				cout<<"11 Pipers Piping"<<endl;

			case 10:
				cout<<"10 Lords a Leaping"<<endl;

			case 9:
				cout<<"9 Ladies Dancing"<<endl;

			case 8:
				cout<<"8 Maids a Milking"<<endl;

			case 7:
				cout<<"7 Swans a Swimming"<<endl;

			case 6:
				cout<<"6 Geese a Laying"<<endl;

			case 5:
				cout<<"5 Golden Rings"<<endl;

			case 4:
				cout<<"4 Calling Birds"<<endl;

			case 3:
				cout<<"3 French Hens"<<endl;

			case 2:
				cout<<"2 Turtle Doves\nand ";

			case 1:
				cout<<"a Partridge in a Pear Tree";
		}; //Use a non-trivial switch statement in your code.

	}
}
