#include <iostream>
using namespace std;

double circleArea(double radius) {
    const double PI = 3.1416;
    return PI * radius * radius;
}

double rectArea(double width, double height) {
    return width * height;
}

int main() {
    double r;
    double w;
    double h;

    cout << "Enter Radius: ";
    cin >> r;
    cout << "Enter Radius: ";
    cin >> w;
    cout << "Enter Radius: ";
    cin >> h;
    cout << "Circle Area = " << circleArea(r) << endl;
    cout << "Rectangle Area = " << rectArea(w, h) << endl;

    return 0;
}