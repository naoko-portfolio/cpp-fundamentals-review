#include <iostream>
#include <string>

using namespace std;

class Product {
private:
	string name;
	double price;
public:
	Product(string name, double price) {
		this->name = name;
		this->price = price;
	}

	void display() {
		cout << "Product: " << name << endl;
		cout << "Price: $" << price << endl;
		cout << endl;
	}

	double getPrice() {
		return price;
	}
};

class ShoppingCart {
private:
	double total;
	int itemCount;
public:
	ShoppingCart(){
		total = 0;
		itemCount = 0;
	}
	void addItem(Product product) {
		double price = product.getPrice();
		if (price >0) {
			total = total + price;
			itemCount++;
		}
		else {
			cout << "Invalid price" << endl;
		}
		
	}

	void displayCart() {
		cout << endl;
		cout << "Items in cart: " << itemCount << endl;
		cout << "Total: $" << total << endl;
	}
};

int main() {
	Product a("Apple", 2.5);
	Product b("Milk", 4.00);
	Product c("Pencil", -1.20);
	a.display();
	b.display();
	c.display();
	ShoppingCart cart;
	cart.addItem(a);
	cart.addItem(b);
	cart.addItem(c);

	cart.displayCart();

	return 0;
}