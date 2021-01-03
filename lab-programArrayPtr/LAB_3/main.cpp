#include <iostream>

using namespace std;
#include "functions LAB_3.h"

int main()

{

    // Task 1
    // Create function and call from main

    labinfo() ; // Name and Lab 3

    // Task 2
    // Create a program to take in 6 numbers in an array

    cout << "\n\nNow enter 6 integers between 0 & 100" << endl;
    int numbers[6], x;
    int i = 0;
    while(i < 6) {
        cin >> x;
        if(x > 0 && x < 100) {
            numbers[i] = x;
            i++;
        } else {
            cout << "\n\nNumber must between 0 & 100" << endl;
        }
    }


    // Task 3
    // Print array of numbers and memory locations

    PrintArray(numbers, 6);

    // Task 4
    // Enter a user input called scalar

    int scalar;
    cout << "\n\nEnter a scalar" << endl;
    cin >> scalar;
    cout << "\nThe scaler value you entered is: " <<  scalar << "\n\n" ;

    // Task 5
    // Multiply each number in the array by the scalar value entered in task 4

    cout << "\nWe are now going to multiply all the values entered in array above by the SCALAR value entered\n\n" ;

    PrintArrayByRef(numbers, scalar); //No explicit length passed


    // Task 7
    // Design your own tree

    cout << "\n\nWe are now going to Design your own tree\n\n" ;

    char tree[7][9] = {{' ',' ',' ',' ','x',' ',' ',' ',' '},
                       {' ',' ',' ','x','x','x',' ',' ',' '},
                       {' ',' ','x','x','x','x','x',' ',' '},
                       {' ','x','x','x','x','x','x','x',' '},
                       {'x','x','x','x','x','x','x','x','x'},
                       {' ',' ',' ',' ','+',' ',' ',' ',' '},
                       {' ',' ',' ',' ','+',' ',' ',' ',' '} };
    PrintTree(tree);

cout << "\n\nThat is the end of this LAB 3 in C++\n" ;
cout << "Thank You\n\n" ;
    return 0;
}




