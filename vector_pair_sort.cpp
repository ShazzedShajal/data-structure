#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

int main() {
    std::map<int, std::string> myMap = {
        {1, "Banana"},
        {2, "Apple"},
        {3, "Mango"},
        {4, "Cherry"}
    };

    // Step 1: Move key-value pairs to a vector
    std::vector<std::pair<int, std::string>> vec(myMap.begin(), myMap.end());

    // Step 2: Sort the vector by the second element (value)
    std::sort(vec.begin(), vec.end(), [](const auto &a, const auto &b) {
        return a.second < b.second;  // Ascending order (A-Z)
    });

    // Step 3: Print sorted elements
    std::cout << "Sorted by values:\n";
    for (const auto &pair : vec) {
        std::cout << pair.first << " -> " << pair.second << '\n';
    }

    return 0;
}
