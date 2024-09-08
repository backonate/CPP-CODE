#include <iostream>
#include <array>
#include <string>
using namespace std;void DaysOfChristmas_smallCode(void){array<string, 15> s{"12 Drummers Drumming\n","11 Pipers Piping\n","10 Lords a Leaping\n","9 Ladies Dancing\n","8 Maids a Milking\n","7 Swans a Swimming\n","6 Geese a Laying\n","5 Golden Rings\n","4 Calling Birds\n","3 French Hens\n","2 Turtle Doves\nand ","a Partridge in a Pear Tree","1st ","2nd ","3rd "};cout<<"The 12 Days of Christmas";for(int i=1;i<13;++i){cout<<"\n\nOn the ";if(i<4){cout<<s[i+11];}else{cout<<i<<"th ";}cout<<"day of Christmas\nmy true love sent to me:\n";for(int n=12-i;n<12;n++){cout<<s[n];}}}
