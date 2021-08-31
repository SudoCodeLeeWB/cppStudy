#include <iostream>
using namespace std;

void MultiplyNumbers();

int main(){

    cout << "This program will help you multiply two numbers " << endl;
    MultiplyNumbers();

    //cout << firstNumber << " * " << secondNumber;
    //cout << " = " << multiplyResult << endl;


}

void MultiplyNumbers(){

    cout <<"Enter the first Number" ;
    int firstNumber = 0;
    cin >> firstNumber;

    cout << "Enter the second Number" ;
    int secondNumber = 0;
    cin >> secondNumber;

    int multiplyResult = firstNumber * secondNumber;

    // display the result
    cout << firstNumber << " * " << secondNumber;
    cout << " = " << multiplyResult << endl;

}