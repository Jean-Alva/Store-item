#include <iostream>

using namespace std;

int main(){
    string str;
    int sum = 0;

    cout << "Enter a string: ";
    getline(cin, str);

    for (int i = 0; i < str.length(); i++){
        sum += str[i];
    }

    cout << "Sum of ASCII values: " << sum << endl;

    return 0;
}