#include <iostream>
using namespace std;

int main(){

/*
literal  : self - evident
every literal has a type. The form and value of a literal determine its type.

integer literal can be written by decimal, octal, or hexadecimal notation. 

starts with 0 : are interpreted as octal
starts with 0x or 0X interpreted as hexadecimal.
  
examples.
deciaml : 20 
octal :024
hexadecimal : 0x1c

literal depends on its value and notation. 
default) decimals are signed, octal/hexadecimal values are both signed and unsigned.

** can be overridden by suffix.

character literal

'a'
"hello world"

String literal is a array of a constant chars. 


*/


//multiline string literal  
    cout << "a really relly long interal " 
         "can use two lines. "   << endl;


//escape sequence. 

    
cout << " \n \v \\ \r \t \b \f \a \? \" \' " << endl;



}