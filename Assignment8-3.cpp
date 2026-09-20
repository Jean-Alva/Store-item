#include <iostream>
using namespace std;

const int MONTHS = 12;

void getData(double temps[][2], int size);
double averageHigh(double temps[][2], int size);
double averageLow(double temps[][2], int size);
int indexHighTemp(double temps[][2], int size);
int indexLowTemp(double temps[][2], int size);

int main(){
    double temperatures[MONTHS][2];
    getData(temperatures, MONTHS);
    double avgHigh = averageHigh(temperatures, MONTHS);
    double avgLow = averageLow(temperatures, MONTHS);
    int indexHigh = indexHighTemp(temperatures, MONTHS);
    int indexLow = indexLowTemp(temperatures, MONTHS);

    cout << "\nAverage High Temperature: " << avgHigh << endl;
    cout << "Average Low Temperature: " << avgLow << endl;
    cout << "Month with Highest Temperature: " << indexHigh + 1 << endl;
    cout << "Month with Lowest Temperature: " << indexLow + 1 << endl;

    return 0;
}
void getData(double temps[][2], int size) {
    for (int i = 0; i < size; i++) {
        cout << "Enter high and low temperatures for month " << i + 1 << ": ";
        cin >> temps[i][0] >> temps[i][1];
    }
}
double averageHigh(double temps[][2], int size) {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += temps[i][0];
    }
    return sum / size;
}
double averageLow(double temps[][2], int size) {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += temps[i][1];
    }
    return sum / size;
}
int indexHighTemp(double temps[][2], int size) {
    int index = 0;
    for (int i = 1; i < size; i++) {
        if (temps[i][0] > temps[index][0]) {
            index = i;
        }
    }
    return index;
}
int indexLowTemp(double temps[][2], int size) {
    int index = 0;
    for (int i = 1; i < size; i++) {
        if (temps[i][1] < temps[index][1]) {
            index = i;
        }
    }
    return index;
}