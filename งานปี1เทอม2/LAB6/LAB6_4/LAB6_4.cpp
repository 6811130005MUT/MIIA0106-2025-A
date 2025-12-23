#include <iostream>
#include <string>
using namespace std;

int main() {
    int size;
    cout << "Enter number of students: ";
    cin >> size;

    string* names = new string[size];
    string* ids = new string[size];
    int* scores = new int[size];
    char* grades = new char[size];

    for (int i = 0; i < size; i++) {
        cout << "\nStudent " << i + 1 << endl;
        cin.ignore();

        cout << "Name: ";
        getline(cin, names[i]);

        cout << "ID: ";
        cin >> ids[i];

        cout << "Score: ";
        cin >> scores[i];

        if (scores[i] >= 80) grades[i] = 'A';
        else if (scores[i] >= 70) grades[i] = 'B';
        else if (scores[i] >= 60) grades[i] = 'C';
        else if (scores[i] >= 50) grades[i] = 'D';
        else grades[i] = 'F';
    }

    cout << "\n--- Result ---" << endl;
    for (int i = 0; i < size; i++) {
        cout << names[i] << " " << ids[i] << " " << scores[i] << " " << grades[i] << endl;
    }

    delete[] names;
    delete[] ids;
    delete[] scores;
    delete[] grades;

    return 0;
}