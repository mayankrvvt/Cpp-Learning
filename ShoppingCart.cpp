#include <iostream>
#include <string>
using namespace std;

// Base Class
class Product {
protected:
    string name;
    double price;

public:
    Product(string n, double p) {
        name = n;
        price = p;
    }

    virtual void display() {
        cout << "Product: " << name << endl;
        cout << "Price: Rs. " << price << endl;
    }

    double getPrice() {
        return price;
    }

    virtual ~Product() {}
};

// Derived Class - Electronics
class Electronics : public Product {
private:
    int warranty;

public:
    Electronics(string n, double p, int w)
        : Product(n, p) {
        warranty = w;
    }

    void display() override {
        cout << "Product: " << name << endl;
        cout << "Price: Rs. " << price << endl;
        cout << "Warranty: " << warranty << " years" << endl;
    }
};

// Derived Class - Clothing
class Clothing : public Product {
private:
    string size;

public:
    Clothing(string n, double p, string s)
        : Product(n, p) {
        size = s;
    }

    void display() override {
        cout << "Product: " << name << endl;
        cout << "Price: Rs. " << price << endl;
        cout << "Size: " << size << endl;
    }
};

int main() {

    // Array of base class pointers
    Product* cart[10];

    int count = 0;
    int choice;

    do {
        cout << "\n===== SHOPPING CART =====" << endl;
        cout << "1. Add Electronics" << endl;
        cout << "2. Add Clothing" << endl;
        cout << "3. View Cart" << endl;
        cout << "4. Calculate Total" << endl;
        cout << "5. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {

            if (count >= 10) {
                cout << "Cart is full!" << endl;
                continue;
            }

            string name;
            double price;
            int warranty;

            cout << "Enter product name: ";
            cin >> name;

            cout << "Enter price: ";
            cin >> price;

            cout << "Enter warranty (years): ";
            cin >> warranty;

            cart[count] = new Electronics(name, price, warranty);
            count++;

            cout << "Electronics added to cart!" << endl;
        }

        else if (choice == 2) {

            if (count >= 10) {
                cout << "Cart is full!" << endl;
                continue;
            }

            string name;
            double price;
            string size;

            cout << "Enter product name: ";
            cin >> name;

            cout << "Enter price: ";
            cin >> price;

            cout << "Enter size: ";
            cin >> size;

            cart[count] = new Clothing(name, price, size);
            count++;

            cout << "Clothing added to cart!" << endl;
        }

        else if (choice == 3) {

            if (count == 0) {
                cout << "Cart is empty!" << endl;
            }
            else {
                cout << "\n===== YOUR CART =====" << endl;

                for (int i = 0; i < count; i++) {
                    cout << "\nProduct " << i + 1 << endl;
                    cart[i]->display();
                }
            }
        }

        else if (choice == 4) {

            double total = 0;

            for (int i = 0; i < count; i++) {
                total += cart[i]->getPrice();
            }

            cout << "Total Amount: Rs. " << total << endl;
        }

        else if (choice == 5) {
            cout << "Thank you for shopping!" << endl;
        }

        else {
            cout << "Invalid choice!" << endl;
        }

    } while (choice != 5);


    // Free dynamically allocated memory
    for (int i = 0; i < count; i++) {
        delete cart[i];
    }

    return 0;
}
