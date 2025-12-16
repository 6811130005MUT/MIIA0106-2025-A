#include <iostream>
using namespace std;

int maxOfThree(int a, int b, int c) {
    int maxValue = a;
    if (b > maxValue) {
        maxValue = b;
    }
    if (c > maxValue) {
        maxValue = c;
    }
    return maxValue;
}
int main() {
    int num1;
    int num2;
    int num3;
    int result;
    cout << "Enter Number1: ";
    cin >> num1;
    cout << "Enter Number2: ";
    cin >> num2;
    cout << "Enter Number3: ";
    cin >> num3;
    result = maxOfThree(num1, num2, num3);

    cout << "Maximum value is: " << result << endl;
    return 0;
}