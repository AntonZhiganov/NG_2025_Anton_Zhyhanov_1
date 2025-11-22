#include <iostream>

using namespace std;

int main()
{
    int stars = -1;
    int count = 0;
    int row = 0;
    int num = 1;


    cout << "Amount of stars: " << endl;
    cin >> stars;

    while (row < stars) {

        while (count < stars) {

            cout << "*";
            count++;
        }
        cout << endl;
        count = 0;
        row++;
    }

    cout << endl;
    cout << endl;
    cout << endl;

    //Part 2

    count = 0;
    row = 0;

    cout << "Amount of stars: " << endl;
    cin >> stars;

    while (row < stars) {

        while (count < num) {

            cout << "*";
            count++;
        }

        cout << endl;
        num++;
        count = 0;
        row++;


    }

    return 0;
}
