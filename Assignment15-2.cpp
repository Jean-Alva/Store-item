#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string str, int left, int right){
    if(left >= right){
        return true;
    }
    if(str[left] != str[right]){
        return false;
    }
    return isPalindrome(str, left + 1, right - 1);
}
int main(){
    string word;
    cout << "Enter a string: ";
    cin >> word;
    if(isPalindrome(word, 0, word.length() - 1)){
        cout << word << " is a palindrome." << endl;
    } else {
        cout << word << " is not a palindrome." << endl;
    }
    return 0;
}