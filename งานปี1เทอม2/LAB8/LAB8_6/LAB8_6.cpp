#include <iostream>
#include <string>
using namespace std;

struct Student {
    string studentID;
    string nickname;
};

int main() {
    Student s1;
    Student* p = nullptr;

    p = &s1;

    p->studentID = "68123456";
    p->nickname = "Somchai";

    cout << "ID: " << p->studentID << endl;
    cout << "Nickname: " << p->nickname << endl;

    return 0;
}