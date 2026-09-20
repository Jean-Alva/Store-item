#include <iostream>
#include <string>
#include <cctype>
using namespace std;

class romanType {
private:
    string roman;
    int value;

    int romanCharToInt(char ch) const {
        switch (ch) {
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
            default: return -1;
        }
    }

    bool isValidRoman(const string& r) const {
        for (char c : r) {
            if (romanCharToInt(c) == -1)
                return false;
        }
        return true;
    }

public:
    romanType(string r = "") {
        setRoman(r);
    }

    void setRoman(string r) {
        for (char &c : r)
            c = toupper(c);

        if (!isValidRoman(r)) {
            cout << "Invalid Roman numeral entered. Setting value to 0.\n";
            roman = "";
            value = 0;
            return;
        }

        roman = r;
        convertToInt();
    }

    void convertToInt() {
        value = 0;
        int length = roman.length();

        for (int i = 0; i < length; i++) {
            int current = romanCharToInt(roman[i]);

            if (i + 1 < length) {
                int next = romanCharToInt(roman[i + 1]);

                if (current < next)
                    value -= current;
                else
                    value += current;
            } else {
                value += current;
            }
        }
    }

    string getRoman() const {
        return roman;
    }

    int getValue() const {
        return value;
    }

    void printRoman() const {
        cout << "Roman Numeral: " << roman << endl;
    }

    void printInteger() const {
        cout << "Integer Value: " << value << endl;
    }

    void print(bool asRoman) const {
        if (asRoman)
            printRoman();
        else
            printInteger();
    }
};

int main() {
    romanType r1("MCXIV");
    romanType r2("CCCLIX");
    romanType r3("MDCLXVI");

    cout << "===== Test Cases =====\n";

    cout << "\nTest 1:\n";
    r1.printRoman();
    r1.printInteger();

    cout << "\nTest 2:\n";
    r2.printRoman();
    r2.printInteger();

    cout << "\nTest 3:\n";
    r3.printRoman();
    r3.printInteger();

    cout << "\n===== User Input =====\n";
    string input;
    cout << "Enter a Roman numeral: ";
    cin >> input;

    romanType userRoman(input);

    int choice;
    cout << "Enter 1 to display Roman numeral, 2 to display integer: ";
    cin >> choice;

    if (choice == 1)
        userRoman.printRoman();
    else if (choice == 2)
        userRoman.printInteger();
    else
        cout << "Invalid choice.\n";

    return 0;
}