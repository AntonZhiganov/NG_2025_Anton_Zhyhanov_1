#include <iostream>

using namespace std;

int main()
{
    double users [10] = {122, 32.3, 32, 333, 4231.4, 344, 423.4, 34, 433.44, 43.5};
    int bankAccount;
    int action;
    double sum;

    cout << "write your account number (0 - 9): " << endl;
    cin >> bankAccount;
    cout << "You have: " << users[bankAccount] << "$" << endl;

    cout << "What do you want to do?" << endl;
    cout << "1 - withdraw money from the account" << endl;
    cout << "2 - deposit money into the account" << endl;
    cout << "3 - display information on all accounts" << endl;
    cout << "4 - total amount of money in all accounts" << endl;
    cin >> action;

    switch(action){

    case 1:
        cout << "how much money do you want to withdraw from the account?" << endl;;
        cin >> sum;
        if (sum <= users[bankAccount])
            cout << "You have: " << users[bankAccount] - sum << "$" << endl;
        else
            cout << "Not enough money in the account!" << endl;
        return 0;

    case 2:
        cout << "How much money do you want to deposit into the account?" << endl;
        cin >> sum;
        cout << "You have: " << users[bankAccount] + sum << "$" << endl;
        return 0;

    case 3 :
        cout << "1 - " << users[0] << endl;
        cout << "2 - " << users[1] << endl;
        cout << "3 - " << users[2] << endl;
        cout << "4 - " << users[3] << endl;
        cout << "5 - " << users[4] << endl;
        cout << "6 - " << users[5] << endl;
        cout << "7 - " << users[6] << endl;
        cout << "8 - " << users[7] << endl;
        cout << "9 - " << users[8] << endl;
        cout << "10 - " << users[9] << endl;
        return 0;

    case 4:
        cout << "total amount of money in all accounts: " << users[0] + users[1] + users[2] + users[3] + users[4] + users[5] + users[6] + users[7] + users[8] + users[9] << endl;
        return 0;

    }

    return 0;
}
