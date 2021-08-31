#include <iostream>
using namespace std;

//variable scope change - global variable
int firstNumber = 0;
int secondNumber = 0;
int multiplyResult =0;


void MultiplyNumbers();

int main(){

    cout << "This program will help you multiply two numbers " << endl;
    MultiplyNumbers();

    cout << "From main : " << firstNumber << " * " << secondNumber << \n;
    cout << "From main : " << " = " << multiplyResult << endl;


}

void MultiplyNumbers(){

    cout <<"Enter the first Number" ;
    cin >> firstNumber;

    cout << "Enter the second Number" ;
    cin >> secondNumber;

    multiplyResult = firstNumber * secondNumber;

    // display the result
    cout << firstNumber << " * " << secondNumber;
    cout << " = " << multiplyResult << endl;

}