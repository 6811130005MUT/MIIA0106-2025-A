#include <iostream>
#include <string>
using namespace std;
int main() {

	string name;
	int age;
	int height;

	cout << "Enter your name: ";
	getline(cin, name);
	cout << "Enter your age: ";
	cin >> age;
	cout << "Enter your height in cm: ";
	cin >> height;


	cout << "Hello, " << name << "!" << endl;
	cout << "You are " << age << " years old and " << height << " cm tall." << endl;
}