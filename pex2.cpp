#include <iostream>
using namespace std;

#include "date.h"

void PrintDates(Date d[], int sizeArray){
    for (int i=0;i<sizeArray; i++){
        d[i].Print();
        cout<<endl;
    }
}

void PrintDates2(Date* d, int sizeArray){
    for (int i=0;i<sizeArray; i++){
        (d+i)->Print();
        cout<<endl;
    }
}

int main(){
    Date* d1;
    Date* d2;
    d1 = new Date();
    d2 = new Date(2, 17, 2025);

    d1->Print();  //method 1: use member access operator (->) 
    cout<<endl;
    (*d1).Print(); //method 2: using the * and . operators
    cout<<endl;
    d2->Print();
    cout<<endl;
    (*d1).Print();
    cout<<endl;

    Date* dates;
    int numDates;
    cout<<"How many dates:";
    cin>>numDates;
    int month, day, year;
    dates = new Date[numDates];
    for (int i=0;i<numDates; i++){
        cout<<"Date "<<i+1<<endl;
        cout<<"Month: ";
        cin>>month;
        cout<<"Day: ";
        cin>>day;
        cout<<"Year: ";
        cin>>year;
        dates[i].setDay(day);
        dates[i].setMonth(month);
        dates[i].setYear(year);
        cout<<endl;
    }

    cout<<"Printing all dates!"<<endl;
    //PrintDates(dates, numDates);
    PrintDates2(dates, numDates);

    delete[] dates;


    return 0;
}
