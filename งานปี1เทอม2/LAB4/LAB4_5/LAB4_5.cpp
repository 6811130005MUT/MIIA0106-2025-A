#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int secretNumber, guess;

    srand(time(0));
    secretNumber = rand() % 100 + 1;

    cout << "===== Number guessing 1 - 100 =====" << endl;

    do {
        cout << "Guess your number: ";
        cin >> guess;

        if (guess > secretNumber) {
            cout << "Too much. Try again.!" << endl;
        }
        else if (guess < secretNumber) {
            cout << "Too little.Try again.!" << endl;
        }
        else {
            cout << "Correct" << endl;
        }
    } while (guess != secretNumber);

    return 0;
}