/**
 * @file encapsulation.cpp
 * @author skk
 * @brief 
 * @version 0.1
 * @date 2022-12-18
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
#include <cassert>

class Date {
public:
  Date(int day, int month, int year);
  int Day() const { return day_; }
  void Day(int day);
  int Month() const { return month_; }
  void Month(int month);
  int Year() const { return year_; }
  void Year(int year);

private:
  int day_{1};
  int month_{1};
  int year_{0};
  bool NumberOfDays(int day, int month, int year);
  bool number_of_days;
};

Date::Date(int day, int month, int year) : number_of_days(NumberOfDays(day, month, year)) {
  // bool number_of_days = NumberOfDays(day, month, year);    // Doesn't actually work since this is 
                                                              // supposed to be done at initializer list level
  Year(year);
  Month(month);
  Day(day);
}

bool Date::NumberOfDays(int day, int month, int year) {
  if (month == 1 || month == 3 || month == 5 || month == 8 || month == 10 || month == 12) 
    return (day >=1 && day <= 31);
  else if (month == 4 || month == 6 || month == 9 || month == 11) 
    return (day >=1 && day <= 30);
  else if (month == 2) {
    if (year % 4 != 0)
      return (day >=1 && day <= 28);
    else if (year % 100 != 0)
      return (day >=1 && day <= 29);
    else if (year % 400 != 0)
      return (day >=1 && day <= 28);
    else
        return (day >=1 && day <= 29);
  }

  return false;
}

void Date::Day(int day) {
  if (number_of_days){
    day_ = day;
  }
}

void Date::Month(int month) {
  if (month >= 1 && month <= 12)
    month_ = month;
}

void Date::Year(int year) { year_ = year; }

// Test
int main() {
  Date date(29, 2, 2000);
  assert(date.Day() == 29);
  assert(date.Month() == 2);
  assert(date.Year() == 2000);
}