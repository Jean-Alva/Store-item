#include <iostream>
using namespace std;

void findMinMax(int arr[], int size, int index, int &smallest, int &largest) {
    if (index == size) {
        return;
    }
    
    if (arr[index] < smallest) {
        smallest = arr[index];
    }
    
    if (arr[index] > largest) {
        largest = arr[index];
    }
    
    findMinMax(arr, size, index + 1, smallest, largest);
}
int main(){
    int size;
    
    cout << "Enter the size of the array: ";
    cin >> size;
    
    int arr[size];
    
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    int smallest = arr[0];
    int largest = arr[0];
    findMinMax(arr, size, 0, smallest, largest);

    cout << "Smallest element: " << smallest << endl;
    cout << "Largest element: " << largest << endl;
    return 0;
}