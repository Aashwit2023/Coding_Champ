#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int>& vec) {
    int n = vec.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (vec[j] > vec[j + 1]) {
                int temp = vec[j];
                vec[j] = vec[j + 1];
                vec[j + 1] = temp;
            }
        }
    }
}

int main() {
    vector<int> vec = {64, 34, 25, 12, 22, 11, 90};
    bubbleSort(vec);
    cout << "Sorted vector: ";
    for (int i = 0; i < vec.size(); i++)
        cout << vec[i] << " ";
    return 0;
}
