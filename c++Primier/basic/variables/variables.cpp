#include <iostream>

using namespace std;
 
int main(){

// variables are the storage that our programs can manipulate. 
// each variable in cpp has a type. - type determines  the size and layout of the variable's memory. 
//variables == objects.

//objects can be defined by a type specifier. 
// this is a oop, so the basic data types ( int , string, ... ) are also part of the objects,
// the class can also be a object. 

//exact definition of the object : region of memory that can "contain data" and "has a type".
// named object itself is usually called as the variables. 


//ex)

int sum =0;
//SalesItem item; // the type "SalesItem" must be defined by the programmer.


// ths string book is init from string literal.  -- provided by the string library. 
// string is defined in namespace std. 
string book("0-201-72345-X");

// init of a object is recommended before use to prevent the error. 
//** init and assignment is differenc in cpp. 


//TODO - study and fix. && check the c++20 syntax. 
//ex1 - init = when allocating the memory. )
// int number = 0;

//ex2 - assignment = replacement. )
//numbers = 10; 


// complex part of init - list init. 
//4 different ways to init: 

int unitsSold1 = 0;
int unitsSold2 = {0};
int unitsSold3 {0};
int unitsSold4 (0);

// problem: data loss,error test
long double id = 3.141592653589;
int a1{id}; // error 
int a2 ={id}; // error
int a3 (id);
int a4 = id;

cout << "a1" << a1 << " a2 " << a2 << " a3 " << a3 << " a4 " << a4 <<endl;


//default init.
// declare : make the space for the variable.
// define : creates the associate entery.

extern int i ; //declare but not defines.
int j; //declares and defines. (defines as default (0) )
// extern int k; // used to call the variable k from other cpp file -- global variable. ,  write out of the function.
// -- for the extern , need one file to declare - but not define the globally used variables.


//identifiers :  the name of the variable.





return 0;


}