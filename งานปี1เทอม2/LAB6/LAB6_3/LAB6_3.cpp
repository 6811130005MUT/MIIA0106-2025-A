#include <iostream>
#include <string>
using namespace std;

int main() {
    string names[3];
    string ids[3];
    int score[3][4];
    int total[3];
    char grade[3];

    for (int i = 0; i < 3; i++) {
        cout << "Student " << i + 1 << endl;
        cout << "Name: ";
        if (i > 0) cin.ignore();
        getline(cin, names[i]);
        cout << "ID: ";
        cin >> ids[i];

        total[i] = 0;
        for (int j = 0; j < 4; j++) {
            cout << "Subject " << j + 1 << " Score: ";
            cin >> score[i][j];
            total[i] += score[i][j];
        }

        int avg = total[i] / 4;
        if (avg >= 80) grade[i] = 'A';
        else if (avg >= 70) grade[i] = 'B';
        else if (avg >= 60) grade[i] = 'C';
        else if (avg >= 50) grade[i] = 'D';
        else grade[i] = 'F';

        cout << endl;
    }

    cout << "Name\tID\tTotal\tGrade" << endl;
    for (int i = 0; i < 3; i++) {
        cout << names[i] << "\t" << ids[i] << "\t" << total[i] << "\t" << grade[i] << endl;
    }

    return 0;
}