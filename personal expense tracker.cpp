#include <iostream>
#include <string>
using namespace std;

struct Expense {
    string catagory;
    string description;
    double amount;
};

class Tracker {
private:
    Expense Expenses[5] = {
        {"Grocery", "Monthly grocery", 30000},
        {"clothes", "Winter clothes", 10000},
        {"bills", "Electricity, Gas", 15000}
    };

public:

    void DisplayExpenses() {
        for (int i = 0; i < 5; i++) {
            cout << Expenses[i].catagory << " __ "
                 << Expenses[i].description << " __ "
                 << Expenses[i].amount << endl;
        }
    }

    void TotalSpending() {
        double Total = 0;

        for (int i = 0; i < 5; i++) {
            Total = Total + Expenses[i].amount;
        }

        cout << "Total spending is: " << Total << endl;
    }

    void HighestSpending() {
        double max = Expenses[0].amount;
        int index = 0;

        for (int i = 1; i < 5; i++) {
            if (Expenses[i].amount > max) {
                max = Expenses[i].amount;
                index = i;
            }
        }

        cout << "Highest spending:" << endl;
        cout << "Category: " << Expenses[index].catagory << endl;
        cout << "Description: " << Expenses[index].description << endl;
        cout << "Amount: " << Expenses[index].amount << endl;
    }

    void SearchExpenses(string catagory) {
        bool found = false;

        for (int i = 0; i < 5; i++) {
            if (Expenses[i].catagory == catagory) {
                cout << "Expense found!" << endl;
                cout << "Category: " << Expenses[i].catagory << endl;
                cout << "Description: " << Expenses[i].description << endl;
                cout << "Amount: " << Expenses[i].amount << endl;

                found = true;
            }
        }

        if (found == false) {
            cout << "Expense not found!" << endl;
        }
    }
};

int main() {
    Tracker t1;

    t1.DisplayExpenses();
    t1.HighestSpending();
    t1.SearchExpenses("Grocery");
    t1.TotalSpending();

    return 0;
}

