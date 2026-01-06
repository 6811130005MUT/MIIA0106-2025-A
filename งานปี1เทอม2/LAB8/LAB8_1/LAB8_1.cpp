#include <iostream>
#include <string>
using namespace std;

struct Student {
    string id;
    string nickname;
    string lineId;
    string phone;
};

int main() {
    Student s1;

    cout << "=== Input Student 1 ===" << endl;
    cout << "Enter ID: ";
    cin >> s1.id;

    cout << "Enter Nickname: ";
    cin >> s1.nickname;

    cout << "Enter LineID: ";
    cin >> s1.lineId;

    cout << "Enter Phone: ";
    cin >> s1.phone;

    cout << "\n=== Output Student 1 ===" << endl;
    cout << "ID: " << s1.id << endl;
    cout << "Nickname: " << s1.nickname << endl;
    cout << "LineID: " << s1.lineId << endl;
    cout << "Phone: " << s1.phone << endl;

    return 0;
}