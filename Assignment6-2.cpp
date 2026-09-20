#include <iostream>
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
    string input_sequence;
    int vowel_count = 0;
    cout << "Enter a sequence of characters: ";
    getline(cin, input_sequence);
    for(int i = 0; i < input_sequence.length(); i++){
        if(isVowel(input_sequence[i])){
            vowel_count++;
        }
    }
    cout << "Number of vowels in the sequence: " << vowel_count << endl;
    return 0;
}