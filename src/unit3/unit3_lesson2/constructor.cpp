/**
 * @file constructor.cpp
 * @author skk 
 * @brief 
 * @version 0.1
 * @date 2022-12-12
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
#include <cassert>

class Date {
 public:
  Date(int d, int m, int y) {  // This is a constructor.
    Day(d);
    Month(m);
    Year(y);
  }
  int Day() { return day; }
  void Day(int d) {
    if (d >= 1 && d <= 31) day = d;
  }
  int Month() { return month; }
  void Month(int m) {
    if (m >= 1 && m <= 12) month = m;
  }
  int Year() { return year; }
  void Year(int y) { year = y; }

 private:
  int day{1};
  int month{1};
  int year{0};
};

// Test in main
int main() {
  Date date(29,8,1981);
  assert(date.Day() == 29);
  assert(date.Month() == 8);
  assert(date.Year() == 1981);

  std::cout << date.Day() << '/' << date.Month() << '/' << date.Year() << std::endl;
}