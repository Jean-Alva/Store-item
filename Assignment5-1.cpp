#include <iostream>
#include <iomanip>

using namespace std;
int main(){
    double pi = 0.0;
    long i, n;

    cout << "Enter the value of n: ";
    cin >> n;
    
    for(i = 0; i < n; i++){
        if(i % 2 == 0)
            pi += 1 / (2 * i + 1);
        else
            pi -= 1 / (2 * i + 1);
    }
    pi *= 4;
    cout << endl << "pi = " << pi << endl;
    return 0;
}
