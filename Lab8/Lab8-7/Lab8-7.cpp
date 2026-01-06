#include <iostream>
#include <string>

using namespace std;

struct Parent
{
    string Name;
    string Relationship;
    string Contact;
    string home;
};
struct Phone
{
    string moblie;
    string home;
};
struct Student
{
    string id;
    string nickname;
    string lineid;
    Phone myContact;
    Parent myParent;
};

void inputStudent(Student& student) {
    cout << "Enter Student Information\n";
    cout << "ID: ";
    cin >> student.id;
    cout << "Nickname: ";
    cin >> student.nickname;
    cout << "Line ID: ";
    cin >> student.lineid;
    cout << "Contact - moblie number: ";
    cin >> student.myContact.moblie;
    cout << "Contact - home: ";
    cin >> student.myContact.home;
    cout << "Parent Information\n";
    cout << "Name: ";
    cin >> student.myParent.Name;
    cout << "Relationship: ";
    cin >> student.myParent.Relationship;
    cout << "Contact: ";
    cin >> student.myParent.Contact;
    cout << "Contact - Home: ";
    cin >> student.myParent.home;
}

void printStudent(const Student& student)
{
    cout << "\nStudent Information\n";
    cout << "ID: " << student.id << endl;
    cout << "Nickname: " << student.nickname << endl;
    cout << "Line ID: " << student.lineid << endl;
    cout << "Contact - moblie number: " << student.myContact.moblie << endl;
    cout << "Contact - Home: " << student.myContact.home << endl;
    cout << "Parent Information\n";
    cout << "Name: " << student.myParent.Name << endl;
    cout << "Relationship: " << student.myParent.Relationship << endl;
    cout << "Contact: " << student.myParent.Contact << endl;
    cout << "Contact - Home: " << student.myParent.home << endl;

}
int main()
{
    Student student1;
    inputStudent(student1);
    printStudent(student1);
    return 0;

}