#include <iostream>
#include <string>
#include <vector>
using namespace std;

#include "date.h" //mandatory

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
    this->day= day;
}

void Date::setMonth(int month){
    this->month = month;
}

void Date::setYear(int year){
    this->year = year;
}

void Date::Print() const {
    cout<<month<<"/"<<day<<"/"<<year;
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

Date Date::add(int numDays){
    Date newDate(month, day, year);

    if (numDays<0) { return newDate;}

    if (newDate.getDay()+numDays <= daysInMonth(newDate.getMonth(), newDate.getYear())){
        newDate.setDay(newDate.getDay() + numDays);
    }
    else{
        for (int i=0;i<numDays;i++){
            if (endOfMonth(newDate.day, newDate.month, newDate.year) and newDate.month==12){
                newDate.setMonth(1);
                newDate.setDay(1);
                newDate.setYear(newDate.getYear()+1);
            }
            else if (endOfMonth(newDate.day, newDate.month, newDate.year)){
                newDate.setDay(1);
                newDate.setMonth(newDate.getMonth()+1);
            }
            else{
                newDate.setDay(newDate.getDay()+1);
            }
        }

    }
    return newDate;

}

Date Date::operator+(int numDays){
    return add(numDays);
}

bool Date::operator==(const Date& rhs){
    return (this->day==rhs.getDay() && this->month==rhs.getMonth() && this->year==rhs.getYear());
}

bool Date::operator!=(const Date& rhs){
    return !(*this==rhs); 
}


bool Date::operator<(const Date& rhs){
    if (this->year < rhs.getYear()) {
        return true;
    }
    else if (this->year == rhs.getYear() && this->month < rhs.getMonth()){
        return true;
    }
    else if (this->year == rhs.getYear() && this->month == rhs.getMonth() && this->day < rhs.getDay()){
        return true;
    }
    else{
        return false;
    }
            
             
}

