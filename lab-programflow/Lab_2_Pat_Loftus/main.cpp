#include <iostream>

using namespace std;
#include "functions.h"
int main()
{

// Task 1, Function called from Main

    labinfo() ;



// Task 2, Take in two numbers and return the largest

    task2() ;


// Task 3, Create Function that can check the user has input a number between 1 and 100

    task3() ;



// Task 4, Create a Menu in MAIN program for the user to select the Question / Answer using a switch statement

cout <<"\n\nTask 4\n";

    int userinput2;

    cout <<"\n\nPlease answer one of the following questions Below by pressing 1 , 2  or 3.";

    cout << "\n\nNo 1 : What is your favourite make of car from the following list";

    cout << "\n\nNo 2 : What is your favourite make of Robot from the following list" ;

    cout << "\n\nNo 3 : What is your Favourite Football Club from the following list\n" ;

    cin>> userinput2;



    int question = userinput2;
    int answercase1;
    int answercase2;
    int answercase3;
    switch (question) {

case 1:
    cout << "\n\nWhat is your favourite make of car";
    cout<< "\n\n(1) Audi  (2) Volkswagon  (3) Toyota  (4) Hyundai\n";
    cin >> answercase1;
    if (answercase1= 1) {
        cout << "Good choice, they are a beautiful car" ;
    }

    break;
case 2:
    cout << "\n\nWhat is your favourite make of Robot" ;
    cout << "\n\n(1) Epson  (2) Staubli  (3) ABB  (4) Fanuc\n";
    cin >> answercase2;
    if (answercase2 = 1) {
        cout << "Good choice, very reliable and easy to use";
    }
    break;
case 3:
    cout << "\n\nWhat is your Favourite Football Club" ;
    cout <<"\n\n(1) Liverpool  (2) Arsenal  (3) Man United  (4) Man City\n";
    cin>> answercase3;
    if (answercase3 = 1) {
        cout << "They have a Excellent players";
    }
    break;
    }





//Task 5, Create the function that can take in a radius value and Calculate the area of a circle and return the value

task5 () ;



//Task 6, Take in two values and calculate the area of a rectangle and return the value to Main

task6 () ;



//task 7 is too take in two values for Temperature and Humidity and print alarm message if in or not in range

task7 () ;


//Task 8, in the main function use a loop to test your function Q5 for a range of values from 0 - 120 meters in 1 meter steps

int Radius1;
float PI;
float areacircle1;

PI = 3.14159;

cout <<"\n\nTask 8 : We are going to calculate the area of a circle\n\n";
cout << "We are going to test a range of values from 0 Meters to 120 Meters \n";
cout << "\nPlease press 0 to continue\n\n";
cin >> Radius1;

//Formula for radius of a circle is Pie x R x R


for (Radius1=0; Radius1<=120; Radius1++)

 if (areacircle1 = PI*Radius1*Radius1)

cout << "\nThe area of the circle is : " << areacircle1 << " meter Sq\n\n\n";



//task 9, write a temperature conversion to convert a value to Celsius and Fahrenheit scales of temperature.

task9 () ;



// Task 10, Find all the even number from 0 to 1000 and Print them
task10 () ;


// Task 11, Write a function to find all the odd numbers between two integers

task11 () ;



//This task we are going to find all the odd values between two integers that are inputted by user and list them in an array

task12 () ;


//Task 13, In this task we are creating a function to pick 6 random numbers.
task13 () ;

// Task 14, This next task is to fix the issues in the code provided in the lab sheet,
//Program was copied and pasted into this and any issues fixed,
//Please see updated program below.

task14 () ;

//Task 15, Create a function that will print finished 10 times, using FOR, WHILE and DO WHILE loops.
task15 () ;

return 0;

}
