#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED

#include <iomanip>
#include <iostream>

using namespace std;


// create new class
class Player {

private:            // declaring private variables

    string forename;
    string surname;
    string position;
    int mobileNumber;


public:            //  declaring public variables


// create the constructers

Player(string forename, string surname,string position,int mobileNumber){
this->forename = forename;
this->surname = surname;
this->position = position;
this->mobileNumber = mobileNumber;
}

string getforename(){

return forename;

}

string getsurname(){

return surname;

}

string getposition(){

return position;

}

int getmobileNumber() {

return mobileNumber;

}

// printing information to the screen

void printPlayerInfo(){

cout<<"\nPlayer Forename: "<< forename <<"\nPlayer Surname: " << surname <<"\nPlayer Position: " << position << "\nContact No:      " << mobileNumber << endl;

}

};

#endif // PLAYER_H_INCLUDED
