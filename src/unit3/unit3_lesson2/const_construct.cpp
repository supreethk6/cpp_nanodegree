/**
 * @file const_construct.cpp
 * @author skk
 * @brief 
 * @version 0.1
 * @date 2022-12-12
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <assert.h>
#include <string>

struct Person {
public:
  // TODO: Add an initialization list
  Person(std::string const &name) : name(name) {}
  std::string const name;
};

// Test
int main() {
  Person alice("Alice");
  Person bob("Bob");
  assert(alice.name != bob.name);
}