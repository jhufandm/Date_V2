#include <iostream>
using namespace std;

#include "date.h"

int main(){

    Date day1;
    Date day2(2, 14, 2025);
    // int year, month, day;

    // cout<<"Year: ";
    // cin>>year;
    // cout<<"Month: ";
    // cin>>month;
    // cout<<"Day: ";
    // cin>>day;

    // today.setDay(day);
    // today.setMonth(month);
    // today.setYear(year);

    cout<<"day 1: ";
    day1.Print();

    cout<<"day 2: ";
    day2.Print();

    return 0;
}