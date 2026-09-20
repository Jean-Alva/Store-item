#include <iostream>
using namespace std;
int main(){
    int start, end;
    cout << "Enter the starting number: ";
    cin >> start;
    cout << "Enter the ending number: ";
    cin >> end;

    int lower = min(start, end);
    int upper = max(start, end);

    int multiples_of_3 = 0;
    int multiples_of_5 = 0;

    for (int i = lower; i <= upper; i++) {
        if (i % 3 == 0)
            multiples_of_3++;
        if (i % 5 == 0)
            multiples_of_5++;
    }
    cout << "Number of multiples of 3: " << multiples_of_3 << endl;
    cout << "Number of multiples of 5: " << multiples_of_5 << endl;
    return 0;
}