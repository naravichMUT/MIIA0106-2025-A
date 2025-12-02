//#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

int main() {
	string studentID;
	string studentName;
	float score;
	string grade;

	cout << "Enter Student ID: ";
	cin >> studentID;

	cin.ignore();

	cout << "Enter student name: ";
	getline(cin, studentName);

	cout << "Enter score: ";
	cin >> score;
	if (score >= 90) {
		grade = "Grade A";
	}
	else if (score >= 80) {
		grade = "Grade B";
	}
	else if (score >= 70) {
		grade = "Grade C";
	}
	else if (score >= 60) {
		grade = "Grade D";
	}
	else {
		grade = "Grade F";
	}
	cout << "\n";
	cout << "=====StudentReport=====" << endl;
	cout << "StudentID: " << studentID << endl;
	cout << "StudentName: " << studentName << endl;
	cout << "Score: " << score << endl;
	cout << "Grade: " << grade << endl;
	cout << "=============" << endl;


	return 0;
}
	