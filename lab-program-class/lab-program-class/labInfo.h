#ifndef LABINFO_H_INCLUDED
#define LABINFO_H_INCLUDED

using namespace std;

// we create a class

class LabInfo{


// we make the information below Public
// we declare the data as strings

public:                // can be accessed from anywhere
    string name;
    string labId;


// we are setting the date here

void Setdate(int dayTempvalue,int monthTempvalue,int yearTempvalue)

{

day=dayTempvalue;
month=monthTempvalue;
year=yearTempvalue;

}


// we are printing the data below to the screen

void printinfo(LabInfo point)

{

// Printing information too screen in format requested in Task 4

cout<<point.name<<"\n"<<point.labId<<"\n"<<"Date:"<<point.day<<":"<<point.month<<":"<<point.year<<  endl;

}


// we make the date below private
// we declare them all as integers

private:                        // can only be accessed within the class
    int day;
    int month;
    int year;



};

#endif // LABINFO_H_INCLUDED




