#include <iostream>
#include <string>

using namespace std;

int main(){
    string text, word;

    cout << "Enter a line of text: ";
    getline(cin, text);

    text += "";

    for(int i = 0; i < text.length(); i++){
        if(text[i] != ' '){
            word += text[i];
        }
        else{
            char punctuation = '\0';

            char last = word[word.length() - 1];
            if(last == ',' || last == '.' || last == '?' || last == ';' || last == ':'){
                punctuation = last;
                word = word.substr(0, word.length() - 1);
            }

            string pig = word.substr(1) + "-" + word[0] + "ay";

            if(punctuation != '\0')
                pig += punctuation;
                cout << pig << " ";
                word = " ";
        }
    }
    cout << endl;

    return 0;
}