#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    string operation;
    bool loggedIn = false;
    int errorCount = 0;

    for (int i = 0; i < N; ++i) {
        cin >> operation;

        if (operation == "login") {
            loggedIn = true;
        } else if (operation == "logout") {
            loggedIn = false;
        } else if (operation == "private") {
            if (!loggedIn) {
                errorCount++;
            }
        }
        // No action needed for "public"
    }

    cout << errorCount << endl;
    return 0;
}
