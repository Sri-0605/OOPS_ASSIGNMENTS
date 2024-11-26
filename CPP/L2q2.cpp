#include <iostream>
#include <string>
using namespace std;


class LineArray {
private:
    string* arr;
    int size;

public:
    // Default constructor
    LineArray() : size(0), arr(nullptr) {}

    // Constructor to read lines from stdin
    LineArray(int n) : size(n) {
        arr = new string[n];
        for (int i = 0; i < n; i++) {
            getline(cin, arr[i]);
        }
    }

    // Copy constructor
    LineArray(const LineArray& other) : size(other.size) {
        arr = new string[size];
        for (int i = 0; i < size; i++) {
            arr[i] = other.arr[i];
        }
    }

    // Destructor
    ~LineArray() {
        delete[] arr;
    }

    // Method to replace a string in the array
    void replaceString(const string& s1, const string& s2) {
        for (int i = 0; i < size; i++) {
            size_t pos = arr[i].find(s1);
            if (pos != string::npos) {
                arr[i].replace(pos, s1.length(), s2);
            }
        }
    }

    // Method to print the array
    void printArray() {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << endl;
        }
    }
};

int main() {
    int n;
    cout << "Enter the number of lines: ";
    cin >> n;
    cin.ignore(); // ignore newline character

    LineArray lines(n);

    string s1, s2;
    cout << "Enter the string to replace: ";
    getline(cin, s1);
    cout << "Enter the replacement string: ";
    getline(cin, s2);

    lines.replaceString(s1, s2);

    cout << "Updated array:" << endl;
    lines.printArray();

    return 0;
}


