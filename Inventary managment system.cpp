#include <iostream>
#include <string>
using namespace std;

struct products {
    int productId;
    string productName;
    int price;
    int Quantity;
};

class Inventary {
private:
    products Products[3] = {
        {25738, "shampoo", 1200, 100},
        {9874, "facewash", 1500, 200},
        {4567, "soap", 500, 150}
    };

public:

    void SearchProducts(int ProductsId) {
        bool found = false;

        for (int i = 0; i < 3; i++) {
            if (Products[i].productId == ProductsId) {
                cout << "Product found!" << endl;
                cout << "Product Name: " << Products[i].productName << endl;
                cout << "Product Id: " << Products[i].productId << endl;
                cout << "Price: " << Products[i].price << endl;
                cout << "Quantity: " << Products[i].Quantity << endl;

                found = true;
            }
        }

        if (found == false) {
            cout << "Product not found" << endl;
        }
    }

    void SellProduct(int ProductId, int soldquantity) {
        bool found = false;

        for (int i = 0; i < 3; i++) {
            if (Products[i].productId == ProductId) {
                found = true;

                if (Products[i].Quantity >= soldquantity) {
                    Products[i].Quantity = Products[i].Quantity - soldquantity;

                    cout << "Product sold successfully" << endl;
                    cout << "Remaining stock: "
                         << Products[i].Quantity << endl;
                }
                else {
                    cout << "Not enough stock" << endl;
                }
            }
        }

        if (found == false) {
            cout << "Product not found" << endl;
        }
    }

    void displayProducts() {
        for (int i = 0; i < 3; i++) {
            cout << "Product Id: "
                 << Products[i].productId << endl;

            cout << "Product Name: "
                 << Products[i].productName << endl;

            cout << "Price: "
                 << Products[i].price << endl;

            cout << "Quantity: "
                 << Products[i].Quantity << endl;

            cout << "------------------" << endl;
        }
    }

    void restockProduct(int productId, int addedQuantity) {
        bool found = false;

        for (int i = 0; i < 3; i++) {
            if (Products[i].productId == productId) {
                Products[i].Quantity =
                    Products[i].Quantity + addedQuantity;

                cout << "Product restocked successfully" << endl;
                cout << "New quantity: "
                     << Products[i].Quantity << endl;

                found = true;
            }
        }

        if (found == false) {
            cout << "Product not found" << endl;
        }
    }

    void TotalInventaryValue() {
        int total = 0;

        for (int i = 0; i < 3; i++) {
            total = total +
                    (Products[i].price * Products[i].Quantity);
        }

        cout << "Total inventory value: "
             << total << endl;
    }
};

int main() {
    Inventary t1;

    t1.displayProducts();

    t1.SearchProducts(25738);

    t1.SellProduct(25738, 10);

    t1.restockProduct(9874, 50);

    t1.TotalInventaryValue();

    return 0;
}
