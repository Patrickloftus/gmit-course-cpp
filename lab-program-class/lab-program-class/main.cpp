/*
Lab 4 C++ Student ID : G00166939



Task 1 : Create function and call from main with name and lab information
Task 2 : Create a class and add 5 public variables
Task 3 : Create a object of class and set its attributes
Task 4 : Print out information in Format
Task 5 : Make the date private and set the date
Task 6 : Create 2 new header files and comment out our code
Task 7 : Moved my main file to CPP file and functions to .H file

#include <iostream>

#include "LabInfo.h"


using namespace std;

// creating a function and calling it from main

void Labinfo (){

cout <<"Patrick Loftus";
cout<<"\nLab using classes\n\n"<< endl;

}

int main()
{
// task 1
// calling the function with Labinfo above

Labinfo ()  ;


// Here we initiliz the obbject of the class
// and implement the constructor

LabInfo point ;

// printing to screen in format as asked for in Task 4

    point.name = "Patrick Loftus";          // Name

    point.labId = "\nLab 4\n";              // Lab No

    point.Setdate(12,02,2021);              // Date


    // print information to screen

    point.printinfo(point);

    return 0;
}


*/
