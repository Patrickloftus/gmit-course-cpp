#ifndef FOOTBALL_CLUB_H_INCLUDED
#define FOOTBALL_CLUB_H_INCLUDED
#pragma once
#include <iomanip>
#include <iostream>
#include "player.h"

using namespace std;

// creating the class

class FootballClub {

private:                    // declaring the private varaibles
    string clubname;
    string district;
    string stripColour;
    string Playersquad [11]= {"Pat","Mark","Cathal","Tommy","Brian","Gerry","Padraig","Gabriel","Jimmy","Matty","Eoin"};  //11 squad members
    string Playerteam [5]= {"Gerry","Jimmy","Pat","Tommy","Brian"};                                                       // 5 team members

public:
                   // declaring the public info

// creating the constructer

FootballClub(string clubname, string district,string stripColour,string Playersquad,string Playerteam){
this->clubname = clubname;
this->district = district;
this->stripColour = stripColour;
//this->Playersquad = Playersquad;
//this->Playerteam = Playerteam;
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

string getPlayersquad (){

return Playersquad [11];

}

string getPlayerteam (){

return Playerteam [5];

}




void setClubname(string clubname){

this->clubname = clubname;

}

// printing info to the screen

void printInfo(){

cout<<"Clubname: "<< clubname <<"\nDistrict: " << district <<"\nStrip Colour: " << stripColour << endl;


    cout <<"List of Squad Players available for selection \n\n";

for (int i=0;i<11;i++){
        cout<<Playersquad [i]<<endl;                        //Array of squad members
        }
    cout<<"\nStarting Team for next Match \n"<<endl;

    for  (int i=0;i<5;i++){                                 //Array of team members
        cout<<Playerteam [i]<<endl;
        }





}






};



#endif // FOOTBALL_CLUB_H_INCLUDED
