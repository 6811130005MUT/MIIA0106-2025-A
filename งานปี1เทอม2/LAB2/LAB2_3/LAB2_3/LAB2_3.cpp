#include <iostream>
#include <string>
using namespace std;
int main() {
	float price;
	int qty;
	float total;


	cout << "Enter price: ";
	cin >> price;
	cout << "Enter quantity: ";
	cin >> qty;
	total = price * qty;
	cout << "Total cost: " << total << "Bath" << endl;

	return 0;

}