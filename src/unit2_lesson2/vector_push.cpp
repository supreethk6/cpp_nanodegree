#include <iostream>
#include <vector>

using std::cout;
using std::vector;

int main() {
  // Initialize the vector
  vector v {1, 2, 3};

  // Print the contents of the vector
  for (int i : v) { 
    cout << i << " ";
  }
  cout << "\n";

  // Push 4 to the back of the vector
  v.push_back(4);

  // Print the contents again
  for (int i : v) { 
    cout << i << " ";
  }
  cout << "\n"; 
}