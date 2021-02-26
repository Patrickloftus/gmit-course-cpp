#ifndef FOOTBALL_CLUB_H_INCLUDED
#define FOOTBALL_CLUB_H_INCLUDED
#include <iomanip>
#include <iostream>


using namespace std;



class FootballClub {

private:
    string clubname;
    string district;
    string stripColour;

public:

FootballClub(string clubname, string district,string stripColour){
this->clubname = clubname;
this->district = district;
this->stripColour = stripColour;
}

string getClubname(){

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

void printInfo(){

cout<<"Clubname : "<< clubname <<"\nDistrict : " << district <<"\nStrip Colour : " << stripColour << endl;

}



};



#endif // FOOTBALL_CLUB_H_INCLUDED
