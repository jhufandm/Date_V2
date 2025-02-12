#include <iostream>
using namespace std;

#include "date.h"

int main(){

    Date day1;
    Date day2(2, 14, 2025);

    cout<<"day 1: ";
    day1.Print();
    cout<<endl;

    cout<<"day 2: ";
    day2.Print();
    cout<<endl;

    Date day3(2, 14, 2024), newDay1, newDay2;
    newDay1 = day3.add(20);
    newDay2 = day3 + 20;  //user the overloadded + operator
    cout<<"20 days later: ";
    newDay1.Print();
    cout<<" ";
    newDay2.Print();
    cout<<endl;
    newDay1 = day3.add(30);
    newDay2 = day3 + 30;
    cout<<"30 days later: ";
    newDay1.Print();
    cout<<" ";
    newDay2.Print();
    cout<<endl;
    newDay1 = day3.add(365);
    newDay2 = day3 + 365;
    cout<<"365 days later: ";
    newDay1.Print();
    cout<<" ";
    newDay2.Print();
    cout<<endl;

    

    
    Date day4(2, 15, 2024);

    if (day3!=day4){
        cout<<"day3 and day4 are different dates!"<<endl;
    }
    else{
        cout<<"day3 and day4 are the same dates!"<<endl;
    }

    Date day5(2, 20, 2024), day6(3, 14, 2024), day7(2, 16, 2024), day8(1, 31, 2019);
    
    if (day4<day5){
        day4.Print();
        cout<<" is earlier than ";
        day5.Print();
        cout<<endl;
        
    }
    else{
        day4.Print();
        cout<<" is later than ";
        day5.Print();
        cout<<endl;
        
    }




    

    return 0;
}