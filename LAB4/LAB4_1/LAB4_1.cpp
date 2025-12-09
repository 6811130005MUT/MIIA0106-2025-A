#include <iostream>
using namespace std;

int main() {
    cout << "for loop: ";
    for (int i = 1; i <= 10; i++) {
        cout << i << " ";
    }
    cout << endl;

    cout << "while loop: ";
    int j = 1;
    while (j <= 10) {
        cout << j << " ";
        j++;
    }
    cout << endl;

    cout << "do-while loop: ";
    int k = 1;
    do {
        cout << k << " ";
        k++;
    } while (k <= 10);
    cout << endl;

    return 0;
}