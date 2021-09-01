#include <iostream>
using namespace std;


int main(){

// demonstrating the Overflow of a variable

unsigned short uShVal  = 65535;

cout << "Incrementing unsigned short " << uShVal << endl;
//overflow, goes to 0
cout << ++uShVal << endl;

short uShVal2  = 32767;

cout << "Incrementing signed short " << uShVal2 << endl;
//overflow , goes to -32768
cout << ++uShVal2 << endl;

return 0;

}