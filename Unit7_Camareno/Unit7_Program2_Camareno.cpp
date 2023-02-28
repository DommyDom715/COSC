#include <iostream> 
#include <string>

using namespace std;

int time_of_day(int hour, int minute, int second)
{
    cout << "Please enter hours";
    cin >> hour;
    cout<< "Please enter minutes";
    cin >> minute;
    cout << "Please enter second";
    cin>> second;
    cout<< "The time of day is: " << hour << minute << second << endl;

    return 0;
}

int app_Date(int dayOfMonth, int month, int year)
{
    cout << "Please enter day";
    cin>> dayOfMonth;
    cout << "Please enter month";
    cin>> month;
    cout<<"Please enter year";
    cin>> year;
    cout<<"App Date: " <<dayOfMonth << month << year<< endl;

    return 0;
}

int event (int eventName, int eventTime, int eventDate)
{
    cout <<"Please enter event name";
    cin>> eventName;
    cout << "Please enter time";
    cin>> eventTime;
    cout<<"Please enter date";
    cin>> eventDate;
    cout<<"Event: " << eventName << eventTime << eventDate << endl;

    return 0;
}

int main() 
{
    // local variable declaration
    int time;
   
    // time of day function.
    time = time_of_day(int hour, int minute, int second);
    cout << "Time is :" << &time<< endl;

    // appDate function
    appDate = app_Date(int dayOfMonth, int month, int year);
    cout << " AppDate is :" << &appDate << endl;


    // event date function
    eventType = event (int eventName, int eventTime, int eventDate);
    cout << " Event is :" << &eventType << endl;

    return 0;
}