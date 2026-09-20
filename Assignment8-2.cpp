#include <iostream>
using namespace std;

int smallestIndex(int arr[], int size){
    if(size <= 0) return -1;

    int minIndex = 0;

    for(int i = 1; i < size; i++){
        if(arr[i] < arr[minIndex]){
            minIndex = i;
        }
    }
    return minIndex;
}
int main(){
    int arr[10] = {5, 3, 8, 1, 4, 9, 2, 7, 6, 0};
    int size = 10;

    int index = smallestIndex(arr, size);

    if(index != -1){
        cout << "The smallest element is: " << arr[index] << " at index " << index << endl;
    } else {
        cout << "Array is empty." << endl;
    }
    return 0;
}