#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <set>
#include <queue>
#include<utility>

using namespace std;


pair<vector<string>, vector<string>> parseInput() {
    vector<string> digits(10, "");
    vector<string> faulty;
    

    for (int i = 0; i < 3; ++i) {
        string line;
        cin >> line;
        for (int j = 0; j < 30; j += 3) {
            digits[j / 3] += line.substr(j, 3);
        }
    }

   
    for (int i = 0; i < 3; ++i) {
        string line;
        cin >> line;
        for (int j = 0; j < line.size(); j += 3) {
            if (faulty.size() <= j / 3) {
                faulty.push_back("");
            }
            faulty[j / 3] += line.substr(j, 3);
        }
    }

    return {digits, faulty};
}


bool isValidConversion(const string& original, const string& candidate) {
    int diffCount = 0;
    for (int i = 0; i < original.size(); ++i) {
        if (original[i] != candidate[i]) {
            ++diffCount;
            if (diffCount > 1) return false;
        }
    }
    return true;
}

int main() {

    auto [digits, faulty] = parseInput();
    int n = faulty.size();
    vector<vector<int>> allNumbers(n);


    for (int i = 0; i < n; ++i) {
        bool found = false;
        for (int d = 0; d < 10; ++d) {
            if (faulty[i] == digits[d] || isValidConversion(digits[d], faulty[i])) {
                allNumbers[i].push_back(d);
                found = true;
            }
        }
        if (!found) {
            cout << "Invalid" << endl;
            return 0;
        }
    }


    long long totalSum = 0;
    vector<int> indices(n, 0);

    while (true) {
      
        long long currentNumber = 0;
        for (int i = 0; i < n; ++i) {
            currentNumber = currentNumber * 10 + allNumbers[i][indices[i]];
        }
        totalSum += currentNumber;

        int pos = n - 1;
        while (pos >= 0 && indices[pos] == allNumbers[pos].size() - 1) {
            indices[pos] = 0;
            --pos;
        }
        if (pos < 0) break;
        ++indices[pos];
    }

    cout << totalSum << endl;
    return 0;
}