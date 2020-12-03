#include <iostream>
#include <cstdlib>
#include <stdio.h>
using namespace std;

int main ()
{

int a;
int b;
int i;
cout << "\n\n\nThis task we are going to find all the odd values between two integers that are inputted by user and list them in an array";
cout << "\n\nPlease enter two integer values\n\n ";
cout << "Please input first integer\n\n";
cin >> a;
cout << "\n\nPlease input Second integer\n\n";
cin >> b;
cout << "\n\nPlease see all the odd numbers between those two values\n\n ";




for(i=a ; i <=b;i++)

{
    if(i%2 == 1 || i % 2== -1)

    cout << i <<"\n\n" ;
}





return 0;
}
