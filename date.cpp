#include <iostream>
#include <string>
#include <vector>
using namespace std;

#include "date.h"

Date::Date(){
    day = 1;
    month = 1;
    year = 1900;
}

Date::Date(int initMonth, int initDay, int initYear){
    month = initMonth;
    day = initDay;
    year = initYear;
}

int Date::getDay() const {
    return day;
}

int Date::getMonth() const {
    return month;
}

int Date::getYear() const {
    return year;
}

void Date::setDay(int day){
    this->day = day;
}

void Date::setMonth(int month){
    this->month = month;
}

void Date::setYear(int year){
    this->year = year;
}

void Date::Print() const {
    cout<<month<<"/"<<day<<"/"<<year<<endl;
}

bool Date::isLeapYear(int yearNum){
    if (yearNum % 400 == 0){
        return true;
    }
    else if (yearNum % 100 !=0 && yearNum % 4 ==0){
        return true;
    }
    else{
        return false;
    }
}

int Date::daysInMonth(int monthNum, int yearNum){
    if (monthNum==2){
        if (isLeapYear(yearNum)) {return 29;}
        else {return 28;}
    }
    else if (monthNum==4 || monthNum==6 || monthNum==9 || monthNum==11) {
        return 30;
    }
    else{
        return 31;
    }
}
bool Date::endOfMonth(int dayNum, int monthNum, int yearNum){
    vector<int> daysInMonth = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (monthNum==2 && isLeapYear(yearNum)){
        return dayNum == 29;
    }
    else{
        return dayNum == daysInMonth.at(monthNum-1); 
    }

}

