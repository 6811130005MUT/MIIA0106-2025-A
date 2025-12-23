#include <iostream>
#include <string>
using namespace std;

void calculateGrade(int score, char& grade) {
    if (score >= 80) grade = 'A';
    else if (score >= 70) grade = 'B';
    else if (score >= 60) grade = 'C';
    else if (score >= 50) grade = 'D';
    else grade = 'F';
}

void displayStudentInfo(string name, string id, int score, char grade) {
    cout << "\n--- Student Information ---" << endl;
    cout << "Name: " << name << endl;
    cout << "ID: " << id << endl;
    cout << "Score: " << score << endl;
    cout << "Grade: " << grade << endl;
}

int main() {
    string name, id;
    int score;
    char grade;

    cout << "Enter Name: ";
    getline(cin, name);

    cout << "Enter ID: ";
    cin >> id;

    cout << "Enter Score: ";
    cin >> score;

    calculateGrade(score, grade);
    displayStudentInfo(name, id, score, grade);

    return 0;
}