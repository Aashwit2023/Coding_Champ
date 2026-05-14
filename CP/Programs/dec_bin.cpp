#include <iostream>
#include <vector>

using namespace std;

void convertBinary(int N) {
    vector<int> ans;

    while (N) {
        int rem = N % 2;
        ans.push_back(rem);
        N = N / 2;
    }
    for (int i = ans.size() - 1; i >= 0; i--) {
        cout << ans[i];
    }

    cout << endl;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    convertBinary(num);

    return 0;
}
