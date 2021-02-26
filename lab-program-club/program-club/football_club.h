#ifndef FOOTBALL_CLUB_H_INCLUDED
#define FOOTBALL_CLUB_H_INCLUDED
#include <iomanip>
#include <iostream>


using namespace std;

// creating the class

class FootballClub {

private:                    // declaring the private varaibles
    string clubname;
    string district;
    string stripColour;

public:                     // declaring the public info

// creating the constructer

FootballClub(string clubname, string district,string stripColour){
this->clubname = clubname;
this->district = district;
this->stripColour = stripColour;
}

string getClubname(){               // getting access to the information

return clubname;

}

string getDistrict(){

return district;

}

string getstripColour(){

return stripColour;

}


void setClubname(string clubname){

this->clubname = clubname;

}

// printing info to the screen

void printInfo(){

cout<<"Clubname: "<< clubname <<"\nDistrict: " << district <<"\nStrip Colour: " << stripColour << endl;

}



};



#endif // FOOTBALL_CLUB_H_INCLUDED
