#include <iostream>
using namespace std;

int main(){

cout << "computing the size of some c++ inbuilt variable types" << endl;

cout << "Size of bool : " <<sizeof(bool) << endl;
cout << "Size of char : " <<sizeof(char) << endl;
cout << "Size of unsigned short int  : " <<sizeof(unsigned short) << endl;
cout << "Size of short int : " <<sizeof(short) << endl;
cout << "Size of unsigned long int : " <<sizeof(unsigned long) << endl;
cout << "Size of long : " <<sizeof(long) << endl;
cout << "Size of int : " <<sizeof(int) << endl;
cout << "Size of unsigned long long : " <<sizeof(unsigned long long) << endl;
cout << "Size of unsigned int : " <<sizeof(unsigned int) << endl;
cout << "Size of float : " <<sizeof(float) << endl;
cout << "Size of double : " <<sizeof(double) << endl;


cout << "The output varies by compiler , hardware and os : " << endl;
cout <<  "The unit is  :  byte" <<endl;

if (sizeof(long) == 4){

 cout<< "This is a 32 bit compiler" <<  endl;
 cout<< "32 bit can run in both 32 bit os and 64 bit os" <<  endl;

}
if (sizeof(long) == 8){

 cout<< "This is a 64 bit compiler" <<  endl;
 cout<< "64 bit can only run in 64 bit os" <<  endl;

}
return 0;

}
