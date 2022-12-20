/**
 * @file static_methods.cpp
 * @author skk
 * @brief 
 * @version 0.1
 * @date 2022-12-19
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <cassert>
#include <cmath>
#include <stdexcept>

class Sphere {
 public:
   static float Volume(int radius) {
       return pi_ * 4/3 * pow(radius,3);
   }

 private:
  static float constexpr pi_{3.14159};
};

// Test
int main(void) {
  assert(abs(Sphere::Volume(5) - 523.6) < 1);
}