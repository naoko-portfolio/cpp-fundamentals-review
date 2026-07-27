#include <iostream>

using namespace std;


int main() {

	//Variables
	int items;
	double price=0, subtotal=0, shipping=0, total=0, discount=0;

	//Ask the user how many items they want to buy
	cout << "How many items do you have: ";
	cin >> items;

	//Input each item's price and calculate thesubtotal
	for (int i = 0; i < items; i++) {

		cout << "Enter price for item " << i + 1 << " : $";
		cin >> price;
		subtotal+= price;
	}

	//Apply a 10% discount if the subtotal is $100 or more
	if (subtotal >= 100) {
		discount = subtotal * 0.1;
	}
	else {
		discount = 0;
	}

	//Check if shipping is free
	if (subtotal-discount >= 100) {
		shipping = 0;
	}
	else {
		shipping = 10;
	}

	//Calculate the final total
	total = subtotal + shipping - discount;

	//Display the results
	cout << "Subtotal: $" << subtotal << endl;
	cout << "Discount: $" << discount << endl;
	cout << "Shipping: $" << shipping << endl;
	cout << "Final total: $" << total << endl;


}