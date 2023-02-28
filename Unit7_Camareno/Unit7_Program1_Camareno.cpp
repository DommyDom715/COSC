#include <iostream>

using namespace std;

//Creating struct for timeOfDay, appDate, event
struct timeofDay 
{
    short hour;
    short minute;
    short seconds;
};

struct appDate
{
    short dayOfMonth;
    short month;
    int year;
};

struct event 
{
    string eventName;
    timeofDay eventTime;
    appDate eventDate;
    bool isUrgent;
};

int main()
{
event fair;
fair.eventName = "State Fair"; //Calling struct event
fair.isUrgent = true;

fair.eventTime.hour = 7;
fair.eventTime.minute = 58;
fair.eventTime.seconds = 0;


fair.eventDate.dayOfMonth = 15;
fair.eventDate.month = 7;
fair.eventDate.year = 2000;

cout << "\nEvent details: " << endl;
cout << "\tEvent" << fair.eventDate << endl;
}