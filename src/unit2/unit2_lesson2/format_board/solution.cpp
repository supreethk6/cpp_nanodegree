#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using std::cout;
using std::ifstream;
using std::istringstream;
using std::string;
using std::vector;

enum class State {kEmpty, kObstackle};

vector<State> ParseLine(string line) {
  istringstream sline(line);
  int element;
  char delimiter;
  vector<State> row;

  while (sline >> element >> delimiter && delimiter == ',') {
    if (element == 0) {
      row.push_back(State::kEmpty);
    }
    else {
      row.push_back(State::kObstackle);
    }
  }
  return row;
}

vector<vector<State>> ReadBoardFile(string path) {
  ifstream myfile (path);
  vector<vector<State>> board{};

  if (myfile) {
    string line;
    while (getline (myfile, line)) {
      vector<State> row = ParseLine(line);
      board.push_back(row);
    }
  }
  return board;
}

string CellString(State cell) {
  switch (cell) {
    case State::kObstackle: return "⛰️   ";
    default: return "0   ";
  }
}

void PrintBoard(const vector<vector<State>> board) {
  for (auto rows : board) {
    for (auto columns : rows) {
      cout << CellString(columns);
    }
    cout << std::endl;
  }
}

int main() {
  auto board = ReadBoardFile("1.board");
  PrintBoard(board);
}