#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Student {
private:
    string name;
    int rollNumber;
    vector<string> subjectCodes;
    vector<string> subjectNames;
    vector<int> internalMarks;
    vector<int> externalMarks;
    double totalMarks;
    double percentage;

public:
    // Default constructor
    Student() : name(""), rollNumber(0), totalMarks(0.0), percentage(0.0) {}

    // Parameterized constructor
    Student(string n, int rn) : name(n), rollNumber(rn), totalMarks(0.0), percentage(0.0) {}

    // Copy constructor
    Student(const Student& s) : name(s.name), rollNumber(s.rollNumber), subjectCodes(s.subjectCodes), subjectNames(s.subjectNames), internalMarks(s.internalMarks), externalMarks(s.externalMarks), totalMarks(s.totalMarks), percentage(s.percentage) {}

    // Destructor
    ~Student() {}

    // Member functions
    void addSubject(string code, string name, int internal, int external) {
        subjectCodes.push_back(code);
        subjectNames.push_back(name);
        internalMarks.push_back(internal);
        externalMarks.push_back(external);
        totalMarks = internal + external;
        percentage = (totalMarks / (subjectCodes.size()*100.00))*100.00;
    }

    void displayMarkSheet() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Subjects: " << endl;
        for (int i = 0; i < subjectCodes.size(); i++) {
            cout << subjectCodes[i] << " - " << subjectNames[i] << " - Internal: " << internalMarks[i] << " - External: " << externalMarks[i] << endl;
        }
        cout << "Total Marks: " << totalMarks << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }

    // Static member function
    static void displayStudentCount() {
        cout << "Total Students: " << Student::studentCount << endl;
    }

    // Friend class
    friend class University;

private:
    static int studentCount;
};

int Student::studentCount = 0;

class University {
private:
    vector<Student*> students;

public:
    University() {}

    ~University() {
        for (Student* s : students) {
            delete s;
        }
    }

    void addStudent(Student* s) {
        students.push_back(s);
        Student::studentCount++;
    }

    void displayMarkSheets() {
        for (Student* s : students) {
            s->displayMarkSheet();
            cout << endl;
        }
    }
};

int main() {
    University university;

    Student* s1 = new Student("Sanjhi Parikh", 051);
    s1->addSubject("AI101", "CPP", 80, 70);
    s1->addSubject("AI102", "DSA", 90, 85);

    Student* s2 = new Student("Lasya Sri", 021);
    s2->addSubject("AI101", "CPP", 85, 80);
    s2->addSubject("AI102", "DSA", 95, 90);

    university.addStudent(s1);
    university.addStudent(s2);

    university.displayMarkSheets();

    Student::displayStudentCount();

    return 0;
}