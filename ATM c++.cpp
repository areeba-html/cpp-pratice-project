#include <iostream>
using namespace std;

class ATM {
private:
    int pin = 1234;
    double balance = 1000;

public:

    void checkBalance() {
        cout << "Your current balance is: " << balance << endl;
    }

    void depositMoney() {
        double deposit;

        cout << "Enter money you want to deposit: ";
        cin >> deposit;

        balance = balance + deposit;

        cout << "Total amount after deposit is: " << balance << endl;
    }

    void withDrawMoney() {
        double withDraw;

        cout << "Enter money you want to withdraw: ";
        cin >> withDraw;

        if (withDraw <= balance) {
            balance = balance - withDraw;

            cout << "Please collect your cash." << endl;
            cout << "Remaining balance: " << balance << endl;
        }
        else {
            cout << "Insufficient balance." << endl;
        }
    }

    void changePin() {
        int oldPin;
        int newPin;

        cout << "Enter your current PIN: ";
        cin >> oldPin;

        if (oldPin == pin) {
            cout << "Enter new PIN: ";
            cin >> newPin;

            pin = newPin;

            cout << "PIN changed successfully." << endl;
        }
        else {
            cout << "Incorrect PIN." << endl;
        }
    }

    void startATM() {

        int userpin;
        int chances = 3;
        bool login = false;

     
        for (int i = 0; i < 3; i++) {

            cout << "Enter PIN to process: ";
            cin >> userpin;

            if (userpin == pin) {
                cout << "Correct PIN!" << endl;
                login = true;
                break;
            }
            else {
                chances--;

                if (chances > 0) {
                    cout << "Incorrect PIN. Try again." << endl;
                    cout << "Chances remaining = " << chances << endl;
                }
                else {
                    cout << "Account blocked!" << endl;
                    return;
                }
            }
        }

    
        if (login) {

            int choice;

            for (int i = 0; i < 5; i++) {

                cout << "\n===== ATM MENU =====" << endl;
                cout << "1. Check Balance" << endl;
                cout << "2. Deposit Money" << endl;
                cout << "3. Withdraw Money" << endl;
                cout << "4. Change PIN" << endl;
                cout << "5. Exit" << endl;

                cout << "Enter your choice: ";
                cin >> choice;

                switch (choice) {

                    case 1:
                        checkBalance();
                        break;

                    case 2:
                        depositMoney();
                        break;

                    case 3:
                        withDrawMoney();
                        break;

                    case 4:
                        changePin();
                        break;

                    case 5:
                        cout << "Thank you for using ATM!" << endl;
                        return;

                    default:
                        cout << "Invalid choice!" << endl;
                }
            }
        }
    }
};

int main() {

    ATM A1;

    A1.startATM();

    return 0;
}

