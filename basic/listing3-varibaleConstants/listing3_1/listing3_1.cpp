#include<iostream>
using namespace std;

int main(){


    cout << "This Program will help you multiply two numbers" << endl;

    cout << "Enter the first number : " << endl;
    int firstNumber =0;
    cin >> firstNumber;

    cout << "Enter the second number" << endl;
    int secondNumber =0;
    cin >> secondNumber;

    //multiply two numbers , store result in a variable
    int multipResult = firstNumber * secondNumber ; 


    cout << " The result is : ";
    cout  << multipResult << endl;

    return 0;


}