#include <iostream>
#include <string>
#include <cctype>
using namespace std;
bool isVowel(char ch){
    ch = tolower(static_cast<unsigned char>(ch));
    switch(ch){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            return true;
        default:
            return false;
    }
}
int main(){
    char letter;
    cout << "Enter a letter: ";
    cin >> letter;

    if (isVowel(letter)){
        cout << "It is a vowel." << endl;
    }
    else{
        cout << "It is not a vowel." << endl;
    }
    return 0;
}