#ifndef DATE_H
#define DATE_H

class Date {
    public:
        Date(); //default constructor
        Date(int initMonth, int initDay, int initYear); //constructor overloading
        int getDay() const;
        int getMonth() const;
        int getYear() const;
        //Three mutator methods
        void setDay(int day);
        void setMonth(int month);
        void setYear(int year);
        void Print() const; //print the date in a nice format
        Date add(int numDays); //find the date of certain number days later
        Date operator+(int numDays); //overload + operator 
        bool operator==(const Date& rhs); //overload == operator
        bool operator!=(const Date& rhs);//overload != operator
        bool operator<(const Date& rhs); //overload < operator
    private:
        int day, month, year; //three instance variables
        bool isLeapYear(int yearNum); //return true/false if it is a leap year or not
        int daysInMonth(int monthNum, int yearNum); //return number of days in a month
        bool endOfMonth(int dayNum, int monthNum, int yearNum); //return true/false indicating if today is the end of month or not

};

#endif