/**
 * @file initializer_lists.cpp
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

using std::string;

// TODO: Define class Person
  // TODO: Define a public constructor with an initialization list
  // TODO: Define a public member variable: name
class Person {
 public:
  Person(string a);
  string name;
};

Person::Person(string a) : name(a) {}

// Test
int main() {
  Person alice("Alice");
  Person bob("Bob");
  assert(alice.name != bob.name);
}

/**
Udacity solution:
-----------------

#include <assert.h>
#include <string>

// TODO: Define class Person
struct Person {
  // TODO: Define a public constructor with an initialization list
  Person(std::string name) : name(name) {}
  // TODO: Define a public member variable: name
  std::string name;  
};

// Test
int main() {
  Person alice("Alice");
  Person bob("Bob");
  assert(alice.name != bob.name);
}

*/
