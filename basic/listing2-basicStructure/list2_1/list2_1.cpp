// hader file for standard input & output
#include <iostream>

// main function
int main(){

    //write to the screen
    std:: cout << "Hello World" << std::endl;

    //terminate the program
    return 0;

}


/*

Program classified into two parts. 
Start with the # and the main body of the program that starts with the int main()

Preprosessor is a tool that runs before the actual compilation starts. 
Always starts with the # -- it indicates the processor to take the contents of the header file. 
<in this case : iostream is used to use the std:: cout and std:: endl>

the header file can be provided by the compiler , but also from the programmer. 
USE the relative path to the programmer - defined header file.
ex > "../FileA/FileB"
use quotes in this case : <> brackets are used when including the standard headers


*/