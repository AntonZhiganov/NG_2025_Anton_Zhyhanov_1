#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int action = 0;
    double number1;
    double number2;
    cout << "Calculator" << endl;
    cout << "What do you want?" << endl;
    cout << "1 - + " << endl;
    cout << "2 - - " << endl;
    cout << "3 - * " << endl;
    cout << "4 - / " << endl;
    cout << "5 - square" << endl;
    cout << "6 - square root" << endl;
    cin >> action;

    if (action < 5) {
        cout << "enter number 1: ";
        cin >> number1;
        cout << "enter number 2: ";
        cin >> number2;
    }

    else if (action == 5 || action == 6){
        cout << "enter number : ";
        cin >> number1;
    }

    else {
        cout << "Enter a number from 1 to 6";
        return 0;
    }

    cout << "Result: ";

    switch(action){
        case 1:
        cout << number1 + number2 << endl;
            break;
        case 2:
        cout << number1 - number2 << endl;
            break;
        case 3:
        cout << number1 * number2 << endl;
            break;
        case 4:
        cout << number1 / number2 << endl;
            break;
        case 5:
        cout << number1 * number1 << endl;
            break;
        case 6:
        cout << sqrt(number1) << endl;
            break;
    };

    return 0;
}
