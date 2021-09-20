#include <algorithm>	// for std::sort
#include <fstream>      // for std::ifstream
#include <iostream>     // for std::cout
#include <string>       // for std::string, std::getline
#include <vector>       // for std::vector
using namespace std;

int main() {
    // Read lines from text file into std::vector
    vector<string> lines{};
    ifstream inputFile{ "strings.txt" };
    string line{};
    while (getline(inputFile, line)) {
        lines.push_back(line);
    }

    // Sort the lines in the vector
    sort(begin(lines), end(lines));
	
    // Print the sorted lines
    for (const auto& x : lines) {
        cout << x << '\n';
    }
}

