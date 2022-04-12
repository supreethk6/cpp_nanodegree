#include <iostream>
#include <vector>
#include <numeric>
using std::cout;
using std::vector;

// Define a function "AdditionFunction" here.
// Instead of just two ints, this function should accept a vector<int> 
// as the argument, and it should return the sum of all the ints in the vector.
int AdditionFunction(const vector<int> &a){
    int vector_sum = 0;
    for(const int &i : a){
        vector_sum += i;
    }
    return vector_sum;
}

// 2nd method
// int AdditionFunction(const vector<int> &v)
// {
//     int sum = 0;
//     for(auto i = v.begin(); i != v.end(); ++i)
//         sum += *i; // dereferencing 
//     return sum;
// }

int main() 
{
    vector<int> v {1, 2, 3};
    
    // Uncomment the following line to call your function:
    cout << AdditionFunction(v) << "\n";

    // method 3
    // cout << std::accumulate(v.begin(), v.end(), 0) << "\n";
}