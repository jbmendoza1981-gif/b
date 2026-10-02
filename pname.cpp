#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;

int main() {
    string productName;
    double unitPrice, discountPercent, shippingFeePerBox;
    int quantity, unitsPerBox;

    cout << "Enter product name: ";
    getline(cin, productName);

    cout << "Enter unit price: ";
    cin >> unitPrice;

    cout << "Enter quantity: ";
    cin >> quantity;

    cout << "Enter discount percentage: ";
    cin >> discountPercent;

    cout << "Enter shipping fee per box: ";
    cin >> shippingFeePerBox;

    cout << "Enter units per box: ";
    cin >> unitsPerBox;

    // Calculations
    double subtotal = unitPrice * quantity;

    double discountAmount = subtotal * (discountPercent / 100.0);

    double merchandiseTotal = subtotal - discountAmount;

    double exactBoxes = (double)quantity / unitsPerBox;

    int boxes = ceil(exactBoxes);

    double shippingTotal = boxes * shippingFeePerBox;

    double finalDue = merchandiseTotal + shippingTotal;

    // Output
    cout << fixed << setprecision(2);

    cout << "\n========== ONLINE STORE INVOICE ==========\n";
    cout << "Product: " << productName << endl;
    cout << "Unit Price: " << unitPrice << endl;
    cout << "Quantity: " << quantity << endl;
    cout << "Subtotal: " << subtotal << endl;
    cout << "Discount: " << discountAmount << endl;
    cout << "Merchandise Total: " << merchandiseTotal << endl;

    cout << setprecision(2);
    cout << "Exact Boxes: " << exactBoxes << endl;
    cout << "Boxes Required: " << boxes << endl;
    cout << "Shipping Total: " << shippingTotal << endl;
    cout << "Final Amount Due: " << finalDue << endl;

    cout << "==========================================\n";

    return 0;
}