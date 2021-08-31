#include<iostream>
using namespace std;

//using a return value of a function.
int hello (){

cout << "return the value" << endl;
return 0;

}


int main(){

// returns the value of the hello function to the os. 
cout << hello() << endl;
return hello();
    
}