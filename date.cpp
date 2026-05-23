#include "date.h"

Date::Date(int month,
           int day,
           int year
        )

    : month(month),
      day(day),
      year(year)
    {
    }

Date::~Date() {
    std::cout << "object destroyed";
}


void Date::print_date() const {

    std::cout << "the current date is: " 
              << month << std::setw(2) 
              << day << std::setw(2) 
              << year;
              
}