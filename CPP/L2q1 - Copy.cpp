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

    // Method to check if a string is in the array
    void findString(const string& s) {
        int count = 0;
        for (int i = 0; i < size; i++) {
            if (arr[i] == s) {
                count++;
            }
        }
        if (count > 0) {
            cout << "Line found: " << s << endl;
            cout << "Repeats: " << count << endl;
        } else {
            cout << "Line not found." << endl;
        }
    }
};

int main() {
    int n;
    cout << "Enter the number of lines: ";
    cin >> n;
    cin.ignore(); // ignore newline character

    LineArray lines(n);

    string s;
    cout << "Enter a string to search: ";
    getline(cin, s);

    lines.findString(s);

    return 0;
}