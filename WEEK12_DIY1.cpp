
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    vector<pair<string, int>> items = {
        {"apple", 50},
        {"banana", 10},
        {"cherry", 30}
    };

    // Sort by integer (second) field in ascending order
    sort(items.begin(), items.end(),
         [](const pair<string, int>& a, const pair<string, int>& b) {
             return a.second < b.second;
         });

    // Print sorted vector
    for (const auto& item : items) {
        cout << item.first << ": " << item.second << '\n';
    }

    return 0;
}
