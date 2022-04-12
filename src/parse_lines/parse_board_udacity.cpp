#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using std::cout;
using std::ifstream;
using std::string;
using std::vector;

// TODO: Add the ParseLine function here.
vector<int> ParseLine(std::string &line) {
  int board_element;
  char delimiter;
  std::istringstream file_stream(line);
  vector<int> board_vector;

  while (file_stream >> board_element >> delimiter) {
    board_vector.push_back(board_element);
  }

  return board_vector;
}

void ReadBoardFile(string path) {
  ifstream myfile (path);
  if (myfile) {
    string line;
    while (getline(myfile, line)) {
      ParseLine(line);
    }
  }
  
  return;
}

void PrintBoard(const vector<vector<int>> board) {
  for (int i = 0; i < board.size(); i++) {
    for (int j = 0; j < board[i].size(); j++) {
      cout << board[i][j];
    }
    cout << "\n";
  }
  
  return;
}

#include "test.cpp" // For testing.

int main() {
  ReadBoardFile("files/1.board");
  TestParseLine(); // For testing.
  // Leave commented out.
  // PrintBoard(board);
}