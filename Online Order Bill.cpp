#include <iostream>
#include <string>

using namespace std;

class Product
{
public:
    string product_name;
    float product_price;
};

class DiscountedProduct : public Product
{
public:
    float discount_pct;
};

int main()
{
    DiscountedProduct product_object;

    cout << "Product Name: ";
    getline(cin, product_object.product_name);

    cout << "Original Price: ";
    cin >> product_object.product_price;

    cout << "Discount Percentage: ";
    cin >> product_object.discount_pct;

    float discount_amt = product_object.product_price * product_object.discount_pct / 100;
    float final_price = product_object.product_price - discount_amt;

    cout << "Final Price: " << final_price << endl;

    return 0;
}


