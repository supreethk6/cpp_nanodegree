#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::vector;
using std::flush;
using std::endl;

void PrintBoard(const vector<vector<int>> &vector_2d){
  for(const auto &row : vector_2d){
    for(const auto &colomn: row){
      cout << colomn << flush;
    }
    cout << endl;
  }
}

int main(){
  vector<vector<int>> board{{0, 1, 0, 0, 0, 0},
                            {0, 1, 0, 0, 0, 0},
                            {0, 1, 0, 0, 0, 0},
                            {0, 1, 0, 0, 0, 0},
                            {0, 0, 0, 0, 1, 0}};

  PrintBoard(board);
}