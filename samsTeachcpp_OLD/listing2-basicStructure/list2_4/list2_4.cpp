#include<iostream>

//this can be declared outside of the function // classes
using namespace std;



int DemoConsoleOutPut(){

cout << "calling the function check" <<endl;
// considered as double ? // int ?
cout << "5/2 = " << 5/2 << endl;
// the result is 2 : it is considered as int
return 0;

}

float DemoConsoleOutPut2(){

cout << "5/2 = " << 5/2 << endl;
return 0;
//still the output is 2, it is regradless of the return type.
}

int main(){

DemoConsoleOutPut();
DemoConsoleOutPut2();


    return 0;
}