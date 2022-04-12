#include <fstream>
#include <iostream>
#include <string>

using std::cout;
using std::string;

void ReadBoardFile() {
  std::ifstream board_file;
  board_file.open("files/1.board");
  if (board_file) {
    cout << "file creation successful" << std::endl;
    std::string line;
    while (std::getline(board_file, line)) {
      cout << line << std::endl;
    }
  }

  return;
}

int main() {
  ReadBoardFile();
}