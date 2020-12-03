#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED



#endif

void labinfo() {

// Task 1

// Create a function called LabInfo and call it from Main

cout << "\n\nPat Loftus\n";
cout <<"Lab 2" << endl;


}



void task2 ()  {


//Task 2

cout <<"\n\nTask 2\n";

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

 cout <<"\n\nTask 3\n";

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

cout <<"\n\nTask 5\n";

//Task 5, Create the function that can take in a radius value and Calculate the area of a circle and return the value

float Radius1;
float PI;
float areacircle1;

PI = 3.14159;

cout <<"\n\nTask 5 : We are going to calculate the area of a circle\n\n";
cout << "Enter a Value for Radius of circle in meters \n";
cin >> Radius1;

//Formula for radius of a circle is Pie x R x R

areacircle1 = PI*Radius1*Radius1;

cout << "\nThe area of the circle is : " << areacircle1 << " meter Sq\n\n\n";



}


void task6 (){

cout <<"\n\nTask 6\n";

//Task 6, Take in two values and calculate the area of a rectangle and return the value to Main

float Length1 ;
float Width1 ;
float Arearectangle1;


cout <<"\n\nThe next task is too calculate the area of a Rectangle";
cout <<"\n\nPlease enter a value for Length of Rectangle\n\n";
cin >> Length1;
cout << "\nPlease enter a value for width of Rectangle\n\n";
cin >>Width1;

// formula for area of rectangle is L x W

Arearectangle1 = Length1 * Width1;

cout << "\nThe area of the Rectangle is  "  << Arearectangle1 << "mm Sq\n\n";



}

void task7 () {

cout <<"\n\nTask 7\n";
//task 7 is too take in two values for Temperature and Humidity and print alarm message if in or not in range

float Temperature1;
float Humidity1;


cout << "\n\nNext task is too check if Temperature and Humidity are in range";
cout << "\nPlease enter a Value for Temperature "  ;
cin >> Temperature1;

cout << "\nPlease enter a Value for Humidity "  ;
cin >> Humidity1;

if (Temperature1 >= 95) {

    cout << "\n\nALARM: TEMPERATURE NOT IN RANGE";
}

else {

    cout << "\n\nTemperature is less than 95 degrees, which is in Range";
}


if ( Humidity1 <= 90) {

    cout << "\n\nALARM: HUMIDITY NOT IN RANGE\n\n\n";

    }

else {

    cout << "\n\nHumidity is greater than 90%, which is in Range\n\n\n";
}

}


void task9 () {

//task 9, write a temperature conversion to convert a value to celsius and fahrenheit scales of temperature.

cout <<"\n\nTask 9\n";

int userselect1;

float temp1;
float temp2;
float answerC;
float answerF;



cout << "This next task is to convert a value of temperature from Celsius to Fahrenheit or Fahrenheit to Celsius\n\n";
cout << "Please select which option you would like to convert\n\n";
cout << "Cesius to Fahrenheit , press No 1\n\n";
cout << "Fahrenheit to Celsius , press No 2\n\n";
cin >> userselect1;


switch (userselect1) {

case 1 :

    cout << "\n\nPlease enter the value you want to convert to Farhenheit\n"  ;
cin >> temp1;
        answerC = (1.8 * temp1) + 32;
    cout << "\n\nThe converted value of what you entered in Celsius is  " << answerC  << " Degrees Fahrenheit\n\n";

break;

case 2:
    cout << "\n\nPlease enter the value you would like to convert to Celcius\n";
cin >> temp2;
        answerF = (temp2 -32 ) / 1.8;

    cout << "\n\nThe converted value of what you entered in Fahrenheit is  " << answerF  << " Degrees Celsius\n\n";



}

}



 void task10 () {



// Task 10, Find all the even number from 0 to 1000 and Print them
cout <<"\n\nTask 10\n";
int i;
int userinput1;

cout << "\n\n\nThis task we are going to print out all the even numbers between 0 and 1000";

cout << "\n\nEven number between 0 and 1000 : Please press 0 to continue ";
cin>> userinput1;

switch (userinput1){

case 0:

for(i=2 ; i <1000;i+=2)

    cout << i <<"\n\n" ;
break;
}

 }


void task11 () {


// Task 11, Write a function to find all the odd numbers between two integers


int a;
int b;
int i;
cout <<"\n\nTask 11\n";
cout << "\n\n\nThis task we are going to find all the odd values between two integers that are inputted by user";
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


}



void task12 () {

    //Task 12, This task we are going to find all the odd values between two integers that are inputted by user and list them in an array

int a;
int b;
int i;
cout <<"\n\nTask 12\n";
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

}
void task13 () {

//Task 13, In this task we are creating a function to pick 6 random numbers.

int a1;

cout <<"\n\nTask 13\n";
cout << "This next function is going to create 6 random numbers between 0 and 1000\n";
cout << "Press 0 to Continue\n\n";
cin >> a1;
for (int x = 0; x<6; x++)
    cout << 1+ (rand()%1000) <<  "  ";

    cout << "\n\nAbove are 6 Random numbers between 0 and 1000\n\n\n ";

 }


void task14 (){

cout << "\n\nTask 14, Fix the issues in code provided in lab\n\n";
// Task 14, This next task is to fix the issues in the code provided in the lab sheet,
//Program was copied and pasted into this and any issues fixed,
//Please see updated program below.


/* Print the numbers 5 through 9: */
int i ;
i=5;
while (i < 10)
{
 cout << i;
 cout << endl;
 i = i + 1;
}
/* Finding the sum 1 + 2 + 3 + ... + 20 */
i = 1;
int sum = 0;
while (i <= 20)
{
 sum = sum + i;
 i = i + 1;
}
cout << "\n\nThe sum of numbers 1 to 20 is  = " << sum;

/* Average a list of grades terminated by -1 */

float sum1 ;
float count ;
int grade;
count = 0;
cout << "\n\nEnter 1st grade (-1 to end): "; // prompt user for grade
cin >> grade; // read grade
while (grade != -1)
{
 sum1 = sum1 + grade;
 count = count + 1 ;

 /* Get next grade */

 cout << "Enter next grade (-1 to end): ";
 cin >> grade;

}


if (count > 0)

 cout << "Average grade is " <<  sum1 / count << "%";


}


void task15() {


//Task 15, Create a function that will print finished 10 times, using FOR, WHILE and DO WHILE loops.

int a1;


cout <<"\n\n\nTask 15, Print out FINISHED in 3 formats, Press 0 to begin\n\n";
cin >> a1;
cout << "\n\n\nTASK 15 : We are going to print out FINISHED 10 times using a FOR loop\n\n";
 int a;
 for (a=1;a<=10; printf ("FINISHED\n",a++));



 cout << "\n\nWe are going to print out FINISHED 10 times using a WHILE loop\n\n";
 int b;
 while (b<=10) {

    cout << "FINISHED\n";
    b = b + 1;
 }


 cout << "\n\nWe are going to print out FINISHED 10 times using a DO WHILE loop\n\n";

int c;

c = 1 ;

do {c = c  + 1;

cout << "FINISHED\n" ;

}

while (c<=10);





}
