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



    return 0;

}
