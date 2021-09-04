// scope : name has a particular meaning. // most are delimited bt curly braces.
// same name can refer to different entities in different scopes.

#include<iostream>
using namespace std;

int main(){


    int sum =0;
    // sum values from 1 through 10 inclusive.
    
    for(int val =1 ; val <= 10 ; ++val) {

       sum += val;
       cout << " Sum of 1 to 10 inclusive is : " << sum << endl;

    }

    return 0;

}

////////////////////////////////////////////////////////////////////////////////////////////////


// three names : main , sum, val
// cout , endl : namespace. 

//1. main : outside of the curly braces - global scope =  accessable through the program. 

//2. sum : in the body =  within the scope of the block = only accessable from its point of declaration.
// < it is also called as a block scope >

//3. val : in the statement = only can be used in this statement. 
//** define a variable near the place where you use it + give a useful init value.


//////////////////////////////////////////////////////////////////////////////////////////////////  





