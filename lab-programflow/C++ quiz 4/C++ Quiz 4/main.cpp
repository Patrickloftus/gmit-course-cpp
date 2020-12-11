#include <iostream>
#include <string>


using namespace std;
int main() {





char val = 'a';
cout<<&val<<endl;
//question 1


  // decration of varaibles//
  string a = "You know who you are. \n";
  string b = "You are too young to play basketball.";
  // output to screen//

  cout <<a<<b;





//question 2


 int n;
 cout << "\n\nEnter a negative integer: ";
 cin >> n;
 if (n>=0){


do { cout << "The integer you entered is a positive number." << endl;
    cout << "Enter a negative integer: ";
    cin >> n;
}
    while (n>=0);

}



//question 3

    int number1; // 3 - declaring variable number1 of type integer
    int number2; // 4 - declaring variable number2 of type integer
    int number3; // 5 - declaring variable number3 of type integer

    int sum=0; // 5 - declaring a variable sum of type integer

    cout <<  "Enter first integer:" ; // prompt user what to do and goes to a new line
    cin >> number1; // read first number from user
    cout <<  "\nEnter second integer:" ; // prompt user what to do and goes to a new line
    cin >> number2 ; // read second number from user
    cout << "\nEnter third integer:" ;
    cin >> number3;
    sum = number1 + number2 + number3; // 6 - add the two numbers and save in variable sum
    cout <<  "\nSum is " << sum; // prompt user what to do and goes to a new line

//question 4

     string name1;
    cout << "\n\nPlease enter your name:\n";
    cin>>name1;
    cout<<name1;





  return 0;

}
