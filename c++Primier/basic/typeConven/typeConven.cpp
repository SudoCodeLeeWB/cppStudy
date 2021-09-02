#include<iostream>
using namespace std;

int main(){

    // if the value is out of range, the result is undefined. 


    bool b =42; // boolean value : only 0 or 1  , if assign nonbool value to the bool object,  the result is false if the value is 0 and true otherwise. 
    cout << b <<endl;    
    
    int i =b; // i has a value 1
    cout << i <<endl;   
    
    i = 3.14; // i has a value 3
    cout << i <<endl;   

    double pi =i;
    cout << pi <<endl;   

    //two variables : c1 and c2 generates error. 

    //unsignd char is 0 to 255
    //expressions lnvloving the unsigned types.
    unsigned char c1 = -1;
    cout << c1 <<endl;   

    //unsigned also effectes the loop. 
    for( unsigned int i =0; i > -10 ; i--){



    }
    
    // signed char is -128 to 127
    signed char c2 = 256;
    cout << c2 <<endl;   



    int i =42;
    // if the value of the i is 0 then the condition is false, else , the condition is true. 
    if(i) {
    i =0;
    cout << i << endl;

    }


   



    return 0;


}