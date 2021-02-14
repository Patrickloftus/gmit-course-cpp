#ifndef LABINFO_CPP_INCLUDED
#define LABINFO_CPP_INCLUDED

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







#endif // LABINFO_CPP_INCLUDED
