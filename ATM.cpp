#include <iostream>
using namespace std;

//######## variable #########//
double balance = 2000;
int deposit = 0;
int withdraw = 0;
int password = 1111;
int process;
//#########################//

void MENU() {
    cout << "======================" << endl;
    cout << "========>>MENU<<======" << endl;
    cout << "======================" << endl;
    cout << "*******************************************" << endl;
    cout << "1: Balance" << endl;
    cout << "2: Withdraw" << endl;
    cout << "3: Deposit" << endl;
    cout << "4: Exit" << endl;
    cout << "*******************************************" << endl;
}

void system() {
    int userPassword;

    cout << "Enter your password: ";
    cin >> userPassword;

    if (userPassword != password) {
        cout << "Wrong Password!" << endl;
        return;
    }

    while (true) {
        MENU();

        cout << "Choose the process that suits you: ";
        cin >> process;

        switch (process) {
        case 1:
            cout << "Your balance is: " << balance << endl;
            break;

        case 2:
            cout << "Dear customer, your balance is: " << balance << endl;
            cout << "How much money do you want to withdraw? ";
            cin >> withdraw;
            if (withdraw > balance) {
                cout << "Sorry, you cannot withdraw more than the available balance: " << balance << endl;
            }
            else {
                balance -= withdraw;
                cout << "Now your balance is: " << balance << endl;
            }
            break;

        case 3:
            cout << "Dear customer, how much money do you want to deposit? ";
            cin >> deposit;


            while (!(deposit % 50 == 0 || deposit % 100 == 0 || deposit % 200 == 0)) {
                cout << "Invalid category. Deposit must be in multiples of 50, 100, or 200. Please enter again: ";
                cin >> deposit;
            }

            balance += deposit;
            cout << "Now your balance is: " << balance << endl;
            break;

        case 4:
            cout << "Thank you for dealing with us. See you later!" << endl;
            return;

        default:
            cout << "Invalid option! Please choose a valid option." << endl;
        }
    }
}

int main() {
    system();
    return 0;
}
