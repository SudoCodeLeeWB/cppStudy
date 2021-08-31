 #include <iostream>
 //string -- not a basic data type in cpp? - N string is a class in the cpp. 
 //if include string library, then can use as a data type 
 #include <string>

 using namespace std;

// (int argr , char* argv[]) parameater in the main functionn is used to get the data from the console
// (from the os)
int main(){

//declare a cariable to store a funcion
int inputNumber;
cout << "Enter an integer :" ;

//sre integer given user input
//scanf in c , Scanner.nextInt() in java

// c - input
cin >> inputNumber ;

//The same with the text i.t. string data.

cout << "Enter an String :" ;
//variable to store the data from the console
string inputName ;

// store the input data to the variable inputName.
// use getline() function to get the entire line (including the space)
cin >> inputName ;

//out to the console. 
cout << "entered String : " << inputName << " entered Int : "  << inputNumber << endl;

// when the endl is used?
//insert new line and flush the stream
// what can happen if not flush the stream?
// reference : https://stackoverflow.com/questions/27910422/c-flushing-the-buffer


// difference between  cout << /n : this only inserts a new line. 



// returns the value to the os  , indicates the success execution.
return 0;


}