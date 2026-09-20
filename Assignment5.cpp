#include <iostream>
#include <string>
using namespace std;
void processNumber(){
    string userInput;
    cout << "Please enter an integer: ";
    cin >> userInput;

    if(userInput[0] == '-' || userInput[0] == '+') {
        userInput = userInput.substr(1);
    }
for (char c : userInput) {
    if (!isdigit(c)) {
        cout << "Invalid input. Please enter an integer." << endl;
        return;
    }
}
int Sum = 0;

cout << "Individual digits: ";
for (char c : userInput) {
    cout << c << " ";
    Sum += c - '0';
}
cout << endl;
cout << "Sum of digits: " << Sum << endl;
}
int main() {
    processNumber();
    return 0;
}

