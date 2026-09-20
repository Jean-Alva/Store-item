#include <iostream>
using namespace std;
int reverseDigit(int num);

int main(){
    int number;

    cout << "Enter an integer: ";
    cin >> number;

    cout << "Reversed number: " << reverseDigit(number) << endl;

    return 0;
}
int reverseDigit(int num){
    int reversed = 0;
    int digit;
    int sign = 1;

    if(num < 0){
        sign = -1;
        num = -num;
    }
    while (num != 0){
        digit = num % 10;
        reversed = reversed * 10 + digit;
        num = num/10;
    }

    return reversed * sign;
}