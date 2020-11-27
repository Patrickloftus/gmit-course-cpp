#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED



#endif

void labinfo() {

// Task 1

// Create a function called LabInfo and call it from Main

cout << "Pat Loftus\n";
cout <<"Lab 2" << endl;


}



void task2 ()  {

//Task 2

//Create a Function in a file that can take two number and return the Largest

float x1;
float y1;

cout << "Please enter a number : ";
cin >> x1;

cout << "\nPlease enter another number : ";
cin >> y1;


if (x1>y1) {
    cout << "\n\nThe Largest value is : "  <<  x1 ;
}
else {
    cout << "\n\nThe Largest value is : " <<  y1 ;
}
}


 void task3 (){

// Task 3, Create Function that can check the user has input a number between 1 and 100

float userinput1;
int checknum1;

checknum1 = 100;


cout << " \n\nPlease Enter a number between 1 and 100  : ";
cin >> userinput1;


if (userinput1<=checknum1) {
    cout << "\n\nYou have correctly entered a number between 1 - 100 : " ;
}
else {
    cout << "\n\nYou have not enetered a number between 1 - 100 : " ;
}


}

void task5(){

//Task 5, Create the function that can take in a radius value and Calculate the area of a circle and return the value

float Radius1;
float PI;
float areacircle1;

PI = 3.14159;

cout <<"\n\nTask 5 : We are going to calculate the area of a circle\n\n";
cout << "Enter a Value for Radius of circle in mm \n";
cin >> Radius1;

//Formula for radius of a circle is Pie x R x R

areacircle1 = PI*Radius1*Radius1;

cout << "The area of the circle is : " << areacircle1 << " mm Sq\n\n\n";



}


void task6 (){

//Task 6, Take in two values and calculate the area of a rectangle and return the value to Main





}



