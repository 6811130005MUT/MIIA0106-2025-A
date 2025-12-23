#include <iostream>
#include <string>
using namespace std;

int main() {
    string names[5];
    string ids[5];
    int scores[5];
    char grades[5];
    for (int i = 0; i < 5; i++) {
        cout << "\nกรอกข้อมูลคนที่ " << (i + 1) << endl;

        cout << "ชื่อ (Name): ";
        if (i > 0) cin.ignore();
        getline(cin, names[i]);

        cout << "รหัส (ID): ";
        cin >> ids[i];

        cout << "คะแนน (Score): ";
        cin >> scores[i];

        if (scores[i] >= 80) grades[i] = 'A';
        else if (scores[i] >= 70) grades[i] = 'B';
        else if (scores[i] >= 60) grades[i] = 'C';
        else if (scores[i] >= 50) grades[i] = 'D';
        else grades[i] = 'F';
    }

    cout << "\n================ รายงานผลการเรียน ================" << endl;
    cout << "No.\tName\t\tID\t\tScore\tGrade" << endl;
    cout << "--------------------------------------------------" << endl;
    for (int i = 0; i < 5; i++) {
        cout << (i + 1) << "\t" << names[i] << "\t\t" << ids[i] << "\t" << scores[i] << "\t" << grades[i] << endl;
    }

    return 0;
}