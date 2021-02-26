#include <iostream>
#include "football_club.h"
#include "player.h"
#include <iomanip>

using namespace std;

int main ()

{               //lab information

cout << "Patrick Loftus "<< "\nC ++ Lab 5" << "\n26-02-2021\n\n\n" << endl;


// lab tasks 1 and 2

cout << "CLUB INFO\n\n" << endl;

FootballClub obj ("       Deel Rovers" , "       Crossmolina", "   Maroon and White");
obj.printInfo ();

// lab tasks 3 and 4


cout << "\n\nPLAYER INFO\n" << endl;

Player info("Patrick" , " Loftus" , "Midfielder", 123456789 );
info.printPlayerInfo ();


// End of lab


cout << "\n\n\This is the end of LAB 5\n\n " << endl;



return 0;

}
