#include <iostream>
using namespace std;

int main() {
    int sensor;

    cout << "===== Line Following Robot System =====" << endl;
    cout << "Select the position of the black line:" << endl;
    cout << "1 = Left" << endl;
    cout << "2 = Center" << endl;
    cout << "3 = Right" << endl;
    cout << "Enter sensor value: ";
    cin >> sensor;

    if (sensor == 1) {
        cout << "Line detected on the LEFT -> Robot turns LEFT" << endl;
    }
    else if (sensor == 2) {
        cout << "Line detected in the CENTER -> Robot moves FORWARD" << endl;
    }
    else if (sensor == 3) {
        cout << "Line detected on the RIGHT -> Robot turns RIGHT" << endl;
    }
    else {
        cout << "Invalid sensor input" << endl;
    }

    return 0;
}