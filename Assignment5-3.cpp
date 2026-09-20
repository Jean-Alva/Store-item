#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    if (n < 0) {
        cout << "Please enter a positive integer." << endl;
        return 1;
    }

    bool isPrime = true;
    if (n == 1){
        isPrime = false;
    } else if (n == 2) {
        isPrime = true;
    } else if (n % 2 == 0){
        isPrime = false;
    } else {
        for (int i = 3; i <= sqrt(n); i += 2) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }
    if (isPrime) {
        cout << n << " is a prime number." << endl;
    } else {
        cout << n << " is not a prime number." << endl;
    }
    return 0;
}