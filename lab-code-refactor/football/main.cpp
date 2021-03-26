#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

#include "football_club.h"

void test(){

/*
string galwayTeam[2][]=   {{"Ruairi", "Lavelle"},
                            {"Eoghan", "Kerin"},
                            {"Sean Andy", "Ó Ceallaigh"},
                            {"David", "Wynne"},
                            {"Gary", "O'Donnell"},
                            {"Gareth", "Bradshaw"},
                            {"Johnny", "Heaney"},
                            {"Thomas", "Flynn"},
                            {"Ciarán", "Duggan"},
                            {"Michael", "Daly"},
                            {"Johnathan", "Duane"},
                            {"Eamon", "Brannigan"},
                            {"Barry", "McHugh"},
                            {"Padraig", "Cunningham"},
                            {"Antaine", "Ó Laoí"}}

*/

}




int main()
{



    cout<< "Lab 7 C++" << endl ;
    cout << "\nPat Loftus\n " << endl ;

    FootballClub club;

    club.printInfo();
    club.setClubname("Crossmolina");
    club.setDistrictname("Mayo\n");
    club.setManagerName ("Alex","Ferguson");


    string clubName = club.getClubname();
    clubName = club.getDistrict();
    cout << clubName<< endl;

    Player playerTemp;

    //READING DATA FROM A FILE
    fstream infile;
    infile.open("teamSquad.csv", ios::in);
    string firstName, secondName, dob, position, mobile;
    string line;
    int i = 0;
    while(std::getline(infile, line)){
        std::istringstream strLine(line);
        if(!(strLine>>firstName>>secondName>>dob>>position>>mobile)){
            break;
        }
        else{
            cout<<"Input ->"<<firstName<<" "<<secondName<<" "<<dob<<" "<<position<<" "<<mobile<<endl;
            playerTemp.setName(firstName,secondName);
            //note stoi convert a string to a int
            playerTemp.setDOB(stoi(dob));
            playerTemp.setPosition(position);
            playerTemp.setMobileNumber(mobile);
            club.addPlayerToSquad(playerTemp, i);
        }
        //increments
        i =i+1;
    }
    infile.close();

    //READING DATA FROM A FILE
    infile.open("teamTeam.csv", ios::in);
    i = 0; //reset i
    while(std::getline(infile, line)){
        std::istringstream strLine(line);
        if(!(strLine>>firstName>>secondName>>dob>>position>>mobile)){
            break;
        }
        else{
            //cout<<"Input ->"<<firstName<<" "<<secondName<<" "<<dob<<" "<<position<<" "<<mobile<<endl;
            playerTemp.setName(firstName,secondName);
            //note stoi convert a string to a int
            playerTemp.setDOB(stoi(dob));
            playerTemp.setPosition(position);
            playerTemp.setMobileNumber(mobile);
            club.addPlayerToTeam(playerTemp, i);
        }
        //increments
        i =i+1;
    }

    cout<<"<<---------------->>"<<endl;

    cout<<"\nSQUAD\n"<<endl;
    club.printSquad();

    cout<<"\nTEAM\n"<<endl;
    club.printTeam();

    cout<<"\nMANAGER\n"<<endl;          // adding manager info
    club.PrintManagerInfo () ;



cout << "\n\nWhat i got done on lab"<< endl;

cout << "\nHappy Easter"<< endl;

    return 0;
}
