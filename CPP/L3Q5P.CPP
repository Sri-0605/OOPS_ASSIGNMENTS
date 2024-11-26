#include <iostream>
#include <string>
#include <vector>

using namespace std;
class Student
{
private:
    string name;
    int roll_no;
    vector<string> subjectCodes;
    vector<string> subjectNames;
    vector<int> internalMarks;
    vector<int> externalMarks;
    double totalMarks;
    double percentage;
    
public:
  //default constuctor
   Student(): name(""),roll_no(0),totalMarks(0.0), percentage(0.0){}

   //parameterized constructor
   Student(string n,int rn ):   name(""),roll_no(0),totalMarks(0.0), percentage(0.0) 
};
 Student
: Student
(/* args */)
{
}
 Student
:: Student
()
{
}
