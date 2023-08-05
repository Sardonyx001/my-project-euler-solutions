#include <_types/_uint64_t.h>
#include <iostream>
#include <chrono>
#include <fstream>
#include <iterator>
#include <map>
#include <set>
#include <sys/_types/_va_list.h>
#include <vector>
#include <unordered_set>
#include <climits>
#include <cmath>
#include <utility>
using namespace std;

// Function to solve the Project Euler problem
// Modify this function based on the specific problem
uint64_t solveProblem(uint64_t upperBound)
{
    uint64_t result = 0;
    // Your solution code goes here
    vector<int> coins = {1,2,5,10,20,50,100,200};
    


    // Return the result
    return result;
}
int main()
{
    cout << "*******************************" << endl;
    cout << "* Project Euler - Problem 31  *" << endl;
    cout << "*        Answer:     ????     *" << endl;
    cout << "*******************************" << endl;

    //Declare your variables 
    uint64_t upperBound = 200;
    //Handle IO
    // cout << "Enter an upper bound: ";
    // cin >> upperBound;

    // Call the solveProblem function
    auto startTime = chrono::high_resolution_clock::now();
    auto result = solveProblem(upperBound);
    auto endTime = chrono::high_resolution_clock::now();

    // Print the result
    auto duration = chrono::duration_cast<chrono::milliseconds>(endTime - startTime).count();
    cout << "The answer is: " << result  << endl;
    cout << "Execution time: " << duration << " milliseconds" << endl;

    return 0;
}
