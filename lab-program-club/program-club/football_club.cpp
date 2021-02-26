#ifndef FOOTBALL_CLUB_CPP_INCLUDED
#define FOOTBALL_CLUB_CPP_INCLUDED
#include "football_club.h"
#include <iomanip>
#include <iostream>

using namespace std;

int main()

{

FootballClub obj ("Deel Rovers" , "Crossmolina", "Maroon and White");
obj.printInfo ();
//obj.setClubname("DEEL ROVERS");
//string clubName = obj.getClubname();
//clubName = obj.getDistrict();


//cout << clubName << endl;

return 0;

}






#endif // FOOTBALL_CLUB_CPP_INCLUDED
