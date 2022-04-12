#include <iostream>
#include <vector>
#include <sstream>
#include <fstream>
#include <string>

using std::cout;
using std::endl;
using std::vector;
using std::getline;

void PushToVector(int &element) {
  vector<int> grid_elements;
  grid_elements.push_back(element);
  
  for (int i : grid_elements) {
    int count;
    cout << i << " ";

    // Using the counter to get to the next line of the grid while printing
    count ++;
    if (count == 5) {
      cout << endl;
    }
  }

  return;
}

void ParseBoardFile(std::string &line) {
  int board_element;
  char delimiter;
  std::istringstream file_stream(line);

  while (file_stream >> board_element >> delimiter) {
    // cout << board_element << delimiter;
    PushToVector(board_element);
  }
  cout << endl;

  return;
}

void ReadBoardFile() {
  std::ifstream board_file ("files/1.board");

  if (board_file) {
    cout << "loaded board file successfully!" << endl;
    std::string line;
    while (getline(board_file, line)) {
      // cout << line << endl;
      ParseBoardFile(line);
    }
  }

  return;
}

int main() {
  ReadBoardFile();
}