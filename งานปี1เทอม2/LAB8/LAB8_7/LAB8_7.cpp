#include <iostream>
#include <string>
using namespace std;

struct Ph {
    string mob;
    string hom;
};

struct Par {
    string nm;
    string rel;
    Ph con;
};

struct Stu {
    string id;
    string nick;
    string line;
    Ph myCon;
    Par myPar;
};

void input(Stu& s) {
    cout << "Input ID: ";
    cin >> s.id;
    cout << "Input Nickname: ";
    cin >> s.nick;
    cout << "Input Line: ";
    cin >> s.line;

    cout << "Input Stu Mobile: ";
    cin >> s.myCon.mob;
    cout << "Input Stu Home: ";
    cin >> s.myCon.hom;

    cout << "Input Parent Name: ";
    cin >> s.myPar.nm;
    cout << "Input Relation: ";
    cin >> s.myPar.rel;

    cout << "Input Parent Mobile: ";
    cin >> s.myPar.con.mob;
    cout << "Input Parent Home: ";
    cin >> s.myPar.con.hom;
}

void show(Stu s) {
    cout << "\n--- Student ---" << endl;
    cout << "ID: " << s.id << endl;
    cout << "Nick: " << s.nick << endl;
    cout << "Line: " << s.line << endl;

    cout << "Mobile: " << s.myCon.mob << endl;
    cout << "Home: " << s.myCon.hom << endl;

    cout << "\n--- Parent ---" << endl;
    cout << "Name: " << s.myPar.nm << endl;
    cout << "Rel: " << s.myPar.rel << endl;
    cout << "Mobile: " << s.myPar.con.mob << endl;
    cout << "Home: " << s.myPar.con.hom << endl;
}

int main() {
    Stu s;
    input(s);
    show(s);
    return 0;
}