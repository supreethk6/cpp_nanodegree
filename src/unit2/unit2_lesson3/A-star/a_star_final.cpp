#include <iostream>
#include <vector>
#include <string>
#include <algorithm>            // for sort
#include <sstream>              // for string stream
#include <fstream>              // for file stream

using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::istringstream;       // input string buf operations
using std::ifstream;            // input file buf operations
using std::sort;                // ascending order
using std::abs;

// Customn State type defined for each grid cells and it's state
enum class State {kEmpty, kObstacle, kClosed, kPath};

/*
 * Parse each line of the board to get the 
 * individual cell value/state.
 */
vector<State> ParseLine(string line) {
  istringstream sline(line);
  int n;
  char c;
  vector<State> row;
  while(sline >> n >> c && c == ',') {
    if(n == 0) {
      row.push_back(State::kEmpty);
    }
    else {
      row.push_back(State::kObstacle);
    }
  }

  return row;
}

/*
 * Read the file from the path and return the  
 * parsed board of customn state type.
 */
vector<vector<State>> ReadBoardFile(string path) {
  ifstream myfile(path);
  vector<vector<State>> board{};
  if(myfile) {
    string line;
    while(getline(myfile, line)) {
      vector<State> row = ParseLine(line);
      board.push_back(row);
    }
  }

  return board;
}

/*
 * Gets the grid cells and helps visualize 
 * in a intutive way while printing the board.
 */
string CellString(State cell) {
  switch(cell) {
    case State::kObstacle: return "⛰️   ";
    default: return "0   ";
  }
}

/*
 * Gets the board as input and 
 * prints it on screen.
 */
void PrintBoard(const vector<vector<State>> &board) {
  for(auto row : board) {
    for(auto column : row) {
      cout << CellString(column);
    }
    cout << endl;
  }

  return;
}


int main() {
  int init[2]{0, 0};
  int goal[2]{4, 5};
  auto board = ReadBoardFile("/home/skk/cpp_nanodegree/src/unit2_lesson2/files/1.board");
  PrintBoard(board);
}
