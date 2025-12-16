#include <iostream>
#include <cctype>
using namespace std;

int main() {

    string line;
    getline(cin, line);

    int count = 0;
    bool inWord = false;

    for (char pointer : line) {
        if (isalpha(pointer)) {
            if (!inWord) {
                count++;
                inWord = true;
            }
        } else {
            inWord = false;
        }
    }

    cout << count;
    return 0;
}
